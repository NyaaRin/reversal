// Self-test for the visual subsystem (Stage 3.6).
//
// Behaviour covered:
//   1. all thirteen anchor cases of 0x180169260, plus the offset/free-scale tail,
//   2. per-element emission (fill vs outline, outline overlay, text shadow order,
//      bars) and the layout-order dispatch of the element list,
//   3. the shared visibility/team/dormant gate reused from Stage 3.5,
//   4. glow: toggle logging, enable/disable transitions, blur vs sharp, style,
//   5. chams material resolution and the three fallback literals,
//   6. ghost listener registration/unregistration and removal classification.

#include <cmath>
#include <cstdio>
#include <cstring>

#include "../aim/targeting.h"
#include "elements.h"
#include "ghost.h"
#include "glow.h"
#include "layout.h"
#include "to_screen.h"

namespace {

int g_failures = 0;

void Check(bool condition, const char* what)
{
    std::printf("%s  %s\n", condition ? "PASS" : "FAIL", what);
    if (!condition)
        ++g_failures;
}

void CheckInt(int actual, int expected, const char* what)
{
    const bool ok = actual == expected;
    std::printf("%s  %s (got %d, want %d)\n", ok ? "PASS" : "FAIL", what, actual, expected);
    if (!ok)
        ++g_failures;
}

void CheckNear(float actual, float expected, const char* what)
{
    const bool ok = std::fabs(actual - expected) <= 1e-3f;
    std::printf("%s  %s (got %.3f, want %.3f)\n", ok ? "PASS" : "FAIL", what, actual, expected);
    if (!ok)
        ++g_failures;
}

void CheckStr(const char* actual, const char* expected, const char* what)
{
    const bool ok = actual != nullptr && std::strcmp(actual, expected) == 0;
    std::printf("%s  %s (got \"%s\")\n", ok ? "PASS" : "FAIL", what, actual ? actual : "(null)");
    if (!ok)
        ++g_failures;
}

} // namespace

int main()
{
    using namespace sf;
    using namespace sf::visual;

    // ------------------------------------------------------------ anchors
    {
        const Rect parent{ 0.f, 0.f, 100.f, 50.f };
        const Vec2 origin{ 0.f, 0.f };
        const float w = 20.f, h = 10.f, line = 12.f, gap = 4.f;

        Vec2 p = AnchorPoint(Anchor::CenterAbove, parent, origin, w, h, line, gap);
        CheckNear(p.x, -10.f, "anchor 0 centres horizontally");
        CheckNear(p.y, -21.f, "anchor 0 sits above by half height + line + gap");

        p = AnchorPoint(Anchor::CenterBelow, parent, origin, w, h, line, gap);
        CheckNear(p.y, 66.f, "anchor 1 sits below the parent by height + line + gap");

        p = AnchorPoint(Anchor::LeftOfTop, parent, origin, w, h, line, gap);
        CheckNear(p.x, -32.f, "anchor 2 sits left by width + line");
        CheckNear(p.y, 4.f, "anchor 2 aligns to the parent top plus gap");

        p = AnchorPoint(Anchor::RightOfTop, parent, origin, w, h, line, gap);
        CheckNear(p.x, 112.f, "anchor 3 sits right by parent width + line");

        p = AnchorPoint(Anchor::LeftOfCenter, parent, origin, w, h, line, gap);
        CheckNear(p.x, 0.f, "anchor 4 starts at the parent x");
        CheckNear(p.y, -5.f, "anchor 4 centres vertically");

        p = AnchorPoint(Anchor::LeftOfBottom, parent, origin, w, h, line, gap);
        CheckNear(p.x, 80.f, "anchor 5 right-aligns inside the parent");

        p = AnchorPoint(Anchor::RightOfCenter, parent, origin, w, h, line, gap);
        CheckNear(p.y, 66.f, "anchor 6 sits below the parent");

        p = AnchorPoint(Anchor::RightOfBottom, parent, origin, w, h, line, gap);
        CheckNear(p.x, 80.f, "anchor 7 right-aligns inside the parent");

        p = AnchorPoint(Anchor::Free, parent, origin, w, h, line, gap);
        CheckNear(p.x, -10.f, "anchor 8 centres horizontally");
        CheckNear(p.y, -5.f, "anchor 8 centres vertically");

        p = AnchorPoint(Anchor::LeftOfTopAlt, parent, origin, w, h, line, gap);
        Check(p.x == -32.f && p.y == 4.f, "anchor 9 matches anchor 2");

        p = AnchorPoint(Anchor::LeftOfBottomAlt, parent, origin, w, h, line, gap);
        CheckNear(p.x, -32.f, "anchor 10 sits left by width + line");
        CheckNear(p.y, 36.f, "anchor 10 bottom-aligns inside the parent minus gap");

        p = AnchorPoint(Anchor::RightOfTopAlt, parent, origin, w, h, line, gap);
        Check(p.x == 112.f && p.y == 4.f, "anchor 11 matches anchor 3");

        p = AnchorPoint(Anchor::RightOfBottomAlt, parent, origin, w, h, line, gap);
        CheckNear(p.x, 112.f, "anchor 12 sits right by parent width + line");
        CheckNear(p.y, 36.f, "anchor 12 bottom-aligns inside the parent minus gap");

        const Vec2 moved = ApplyOffset(p, 3.f, 7.f, Anchor::RightOfBottomAlt, 0.5f, true);
        CheckNear(moved.x, 115.f, "the element offset is added");
        CheckNear(moved.y, 43.f, "the element offset is added on both axes");

        const Vec2 scaled = ApplyOffset(Vec2{ 0.f, 0.f }, 10.f, 10.f, Anchor::Free, 0.5f, false);
        CheckNear(scaled.x, 5.f, "the free anchor scales its offset when the flag is off");
        const Vec2 unscaled = ApplyOffset(Vec2{ 0.f, 0.f }, 10.f, 10.f, Anchor::Free, 0.5f, true);
        CheckNear(unscaled.x, 10.f, "the free anchor keeps its offset when the flag is on");
        const Vec2 other = ApplyOffset(Vec2{ 0.f, 0.f }, 10.f, 10.f, Anchor::CenterAbove, 0.5f, false);
        CheckNear(other.x, 10.f, "other anchors never scale their offset");
    }

    // ------------------------------------------------------ element model
    {
        CheckInt(kElementCount, 8, "the element family has eight classes");
        CheckInt(kBBoxStyleCount, 4, "the bbox style list has four entries");
        CheckStr(kBBoxStyles[0], "Full box", "style 0 is Full box");
        CheckStr(kBBoxStyles[1], "Corner box", "style 1 is Corner box");
        CheckStr(kBBoxStyles[2], "Top + bottom", "style 2 is Top + bottom");
        CheckStr(kBBoxStyles[3], "Side rails", "style 3 is Side rails");
        CheckStr(kElements[0].className, "Features::Visual::ESP::Editor::Elements::BaseElement",
                 "the first element class name is the RTTI name");
        Check(kElements[5].vtableRva == 0x33d9f8ULL, "DynamicTextElement keeps its vtable RVA");
        Check(kElements[7].vtableRva == 0x339258ULL, "ArmorBarElement keeps its vtable RVA");
    }

    // ----------------------------------------------------------- emission
    {
        Element box;
        box.kind = ElementKind::Box;
        box.width = 40.f;
        box.height = 20.f;
        box.box.filled = false;
        box.box.thickness = 2;
        DrawSink sink;
        EmitElement(box, Vec2{ 5.f, 6.f }, sink, 0);
        CheckInt(static_cast<int>(sink.commands.size()), 1, "an unfilled box emits one outline");
        Check(sink.commands[0].kind == DrawKind::RectOutline, "the box emits an outline");
        CheckNear(sink.commands[0].rect.x, 5.f, "the rect starts at the anchor point");
        CheckNear(sink.commands[0].thickness, 2.f, "the box thickness reaches the command");

        sink.Clear();
        box.box.filled = true;
        EmitElement(box, Vec2{ 0.f, 0.f }, sink, 0);
        Check(sink.commands.size() == 1 && sink.commands[0].kind == DrawKind::Rect,
              "a filled box emits a fill, not an outline");

        Element bbox;
        bbox.kind = ElementKind::BBox;
        bbox.width = 30.f;
        bbox.height = 60.f;
        bbox.bbox.filled = false;
        bbox.bbox.outline = true;
        sink.Clear();
        EmitElement(bbox, Vec2{ 0.f, 0.f }, sink, 1);
        CheckInt(static_cast<int>(sink.commands.size()), 2,
                 "an outlined bbox emits its body then its outline");
        Check(sink.commands[0].kind == DrawKind::RectOutline &&
              sink.commands[1].kind == DrawKind::RectOutline,
              "both bbox commands are outlines");

        Element text;
        text.kind = ElementKind::Text;
        text.text.text = "Player";
        text.text.shadow = true;
        text.stored = Color{ 1.f, 0.f, 0.f, 1.f };
        sink.Clear();
        EmitElement(text, Vec2{ 10.f, 10.f }, sink, 2);
        CheckInt(static_cast<int>(sink.commands.size()), 2,
                 "a shadowed text emits shadow then text");
        Check(sink.commands[0].kind == DrawKind::Text && sink.commands[1].kind == DrawKind::Text,
              "both text commands are text");
        CheckNear(sink.commands[0].rect.x, 11.f, "the shadow is offset by one pixel");
        CheckStr(sink.commands[1].text.c_str(), "Player", "the text payload is carried");

        Element hp;
        hp.kind = ElementKind::HealthBar;
        sink.Clear();
        EmitElement(hp, Vec2{ 0.f, 0.f }, sink, 3);
        Check(sink.commands.size() == 1 && sink.commands[0].kind == DrawKind::Bar,
              "the health bar emits a bar");
    }

    // ---------------------------------------------------- dispatch ordering
    {
        ElementList list;
        Element a; a.kind = ElementKind::Box; a.width = 10.f; a.height = 10.f; a.box.filled = true;
        Element b; b.kind = ElementKind::Text; b.width = 10.f; b.height = 10.f; b.text.text = "B";
        Element c; c.kind = ElementKind::HealthBar; c.width = 5.f; c.height = 30.f;
        list.Add(a);
        list.Add(b);
        list.Add(c);

        DrawSink sink;
        list.Render(Rect{ 0.f, 0.f, 100.f, 100.f }, Vec2{ 0.f, 0.f }, 2.f, 1.f, true, sink);
        CheckInt(static_cast<int>(sink.commands.size()), 3, "three elements emit three commands");
        CheckInt(sink.commands[0].element, 0, "the first command comes from element 0");
        CheckInt(sink.commands[1].element, 1, "the second command comes from element 1");
        CheckInt(sink.commands[2].element, 2, "the third command comes from element 2");
        Check(sink.commands[0].kind == DrawKind::Rect &&
              sink.commands[1].kind == DrawKind::Text &&
              sink.commands[2].kind == DrawKind::Bar,
              "dispatch follows layout order, not kind order");

        std::vector<int> reversed{ 2, 1, 0 };
        list.Render(Rect{ 0.f, 0.f, 100.f, 100.f }, Vec2{ 0.f, 0.f }, 2.f, 1.f, true, sink,
                    &reversed);
        CheckInt(sink.commands[0].element, 2, "an explicit layout order is honoured first");
        CheckInt(sink.commands[2].element, 0, "an explicit layout order is honoured last");

        // A gap changes placement: anchor 0 is above the parent.
        Element anchored = a;
        anchored.anchor = Anchor::CenterAbove;
        anchored.line = 3.f;
        ElementList one;
        one.Add(anchored);
        one.Render(Rect{ 0.f, 20.f, 100.f, 50.f }, Vec2{ 0.f, 0.f }, 5.f, 1.f, true, sink);
        CheckNear(sink.commands[0].rect.y, 20.f - 5.f - 3.f - 5.f,
                  "placement includes the parent offset, half height, line and gap");

        DrawSink empty;
        ElementList none;
        none.Render(Rect{ 0.f, 0.f, 10.f, 10.f }, Vec2{ 0.f, 0.f }, 0.f, 1.f, true, empty);
        Check(empty.commands.empty(), "an empty layout emits nothing");
    }

    // ------------------------------------------------ shared visibility gate
    {
        // Reuses Stage 3.5's 0x1800c5030 chain: the element family has no filter
        // of its own in the corpus.
        aim::GateInputs enemy;
        enemy.index = 3;
        enemy.health = 100;
        enemy.team = 1;
        enemy.localTeam = 2;
        aim::GateConfig cfg;
        Check(aim::CheckTarget(enemy, cfg) == aim::GateRefusal::None,
              "a visible enemy passes the shared gate");

        aim::GateInputs teammate = enemy;
        teammate.team = 2;
        Check(aim::CheckTarget(teammate, cfg) == aim::GateRefusal::TeamMismatch,
              "a teammate is filtered out");

        aim::GateInputs dormant = enemy;
        dormant.dormant = true;
        dormant.index = 0;
        Check(aim::CheckTarget(dormant, cfg) == aim::GateRefusal::IndexOutOfRange,
              "an invalid index is filtered out");
        aim::GateInputs dead = enemy;
        dead.health = 0;
        Check(aim::CheckTarget(dead, cfg) == aim::GateRefusal::Dead,
              "a dead player is filtered out");
        aim::GateInputs hidden = enemy;
        hidden.flags = 0x40;
        Check(aim::CheckTarget(hidden, cfg) == aim::GateRefusal::NoDraw,
              "a NODRAW entity is filtered out");

        CheckNear(aim::SanitizeFov(200.f), 180.f, "the shared FOV clamp still applies");
    }

    // --------------------------------------------------------------- glow
    {
        GlowState state;
        GlowConfig cfg;
        Check(!UpdateGlow(state, cfg, true, true), "an unchanged disabled glow does not log");
        cfg.enabled = true;
        Check(UpdateGlow(state, cfg, true, true), "enabling the glow logs once");
        Check(state.glowActive, "the glow activates when enabled, styled and keyed on");

        GlowConfig noKey = cfg;
        Check(!UpdateGlow(state, noKey, true, false) && !state.glowActive,
              "the enable key gates the glow on its own");
        UpdateGlow(state, cfg, true, true);
        Check(state.glowActive, "the glow reactivates when the key returns");
        Check(!UpdateGlow(state, cfg, false, true) && !state.glowActive,
              "an unresolved style disables the glow");
        UpdateGlow(state, cfg, true, true);

        cfg.enabled = false;
        Check(UpdateGlow(state, cfg, true, true), "disabling the glow logs once");
        Check(!state.glowActive, "the glow is off after disabling");

        GlowConfig sharp = cfg;
        sharp.sharp = true;
        Check(IsSharp(sharp), "sharp is reported when the sharp key is set");
        Check(!IsSharp(cfg), "blur is the default when the sharp key is clear");
        CheckStr(ToggleName(false), "off", "the disabled toggle literal is \"off\" (0x1803449c4)");
        CheckStr(ToggleName(true), "ON", "the enabled toggle literal is \"ON\" (0x18034b584)");
        CheckStr(StyleName(false), "blur", "the style literal is \"blur\" when the sharp key is clear");
        CheckStr(StyleName(true), "sharp", "the style literal is \"sharp\" when the sharp key is set");
        Check(std::strstr(kGlowToggleLog, "through walls=%d") != nullptr,
              "the toggle line carries the through-walls count");
        Check(std::strstr(kGlowToggleLog, "sharp=%dpx") != nullptr,
              "the toggle line carries the sharp radius");
    }

    // -------------------------------------------------------------- chams
    {
        MaterialResult result = MaterialResult::Resolved;
        const char* used = ResolveMaterial("chams_flat", result);
        CheckStr(used, "chams_flat", "a resolvable material is used as requested");
        Check(result == MaterialResult::Resolved, "a resolvable material reports success");

        used = ResolveMaterial("", result);
        CheckStr(used, "Flat", "a missing name falls back to Flat");
        Check(result == MaterialResult::NotFoundFallback, "a missing name reports not-found");

        CheckStr(MaterialResultLog(MaterialResult::Resolved),
                 "[CHAMS] custom material '%s' resolved\n",
                 "the resolved line matches the image string");
        CheckStr(MaterialResultLog(MaterialResult::NotFoundFallback),
                 "[CHAMS] custom material '%s' not found -> falling back to Flat\n",
                 "the not-found line matches the image string");
        CheckStr(MaterialResultLog(MaterialResult::UnavailableFallback),
                 "[CHAMS] material '%s' unavailable on this mount -> falling back to Flat\n",
                 "the unavailable line matches the image string");
        Check(ChamsGlowFeature::kVfunc05 == 0x18010cc70ULL &&
              ChamsGlowFeature::kVfunc16 == 0x18010ceb0ULL,
              "the glow feature keeps its observed bodies");
    }

    // -------------------------------------------------------------- ghost
    {
        GhostListener listener;
        listener.Register(false, true, false);
        Check(listener.state == ListenerState::Deferred, "missing RTTI defers registration");
        listener.Register(true, false, false);
        Check(listener.state == ListenerState::Conservative,
              "a missing signature falls back to conservative ghost keeping");
        listener.Register(true, true, true);
        Check(listener.state == ListenerState::Conservative, "a throwing registration stays safe");
        listener.Register(true, true, false);
        Check(listener.state == ListenerState::Registered, "a clean registration succeeds");
        Check(listener.transmitsTracked && listener.recreateTracked,
              "registration turns on transmit and recreate tracking");

        Check(!listener.Unregister(true, true, false, false),
              "unregister fails when the entry is not in the list");
        Check(listener.PreservesGhosts(), "a failed unregister keeps ghost preservation");
        Check(listener.Unregister(true, true, true, false), "a clean unregister succeeds");
        Check(listener.state == ListenerState::Unregistered, "the listener is unregistered");
        Check(!listener.PreservesGhosts(), "ghosts are no longer preserved");

        RemovalInputs in;
        Check(ClassifyRemoval(in) == RemovalKind::None, "an unremoved entity is not classified");
        in.removed = true;
        in.streamOut = true;
        in.deltaMs = 100;
        Check(ClassifyRemoval(in) == RemovalKind::StreamOut,
              "a fresh stream-out is kept");
        in.deltaMs = 5000;
        Check(ClassifyRemoval(in) != RemovalKind::StreamOut,
              "a stale stream-out is not kept");
        in.streamOut = false;
        in.oldSerial = 0x10;
        in.newSerial = 0x20;
        Check(ClassifyRemoval(in) == RemovalKind::SerialReuse, "a reused serial is classified");
        in.newSerial = 0x10;
        in.slotOccupied = true;
        Check(ClassifyRemoval(in) == RemovalKind::OccupiedSlot,
              "an occupied slot is classified");
        in.slotOccupied = false;
        Check(ClassifyRemoval(in) == RemovalKind::Delete, "a plain removal is a delete");

        CheckInt(static_cast<int>(kStreamOutGraceMs), 250,
                 "the stream-out grace window is 250 ms (0xfa, 0x180191fa0)");
        RemovalInputs window;
        window.removed = true;
        window.streamOut = true;
        window.deltaMs = kStreamOutGraceMs;
        Check(ClassifyRemoval(window) == RemovalKind::StreamOut,
              "a stream-out at exactly the grace boundary is kept");
        window.deltaMs = kStreamOutGraceMs + 1;
        Check(ClassifyRemoval(window) != RemovalKind::StreamOut,
              "one millisecond past the boundary it is no longer kept");
    }

    // ------------------------------------------------------------ projection
    {
        ViewMatrix identity;
        identity.m[14] = 1.f;   // w = z + 1, so z = -2 is behind the near plane
        Vec2 screen;
        Check(WorldToScreen(Vector(0.f, 0.f, 1.f), identity, 800, 600, &screen),
              "a point in front of the camera projects");
        CheckNear(screen.x, 400.f, "a centred point lands at half the screen width");
        CheckNear(screen.y, 300.f, "a centred point lands at half the screen height");

        Check(!WorldToScreen(Vector(0.f, 0.f, -2.f), identity, 800, 600, &screen),
              "a point behind the camera is rejected by the w guard");
        Check(!WorldToScreen(Vector(0.f, 0.f, 1.f), identity, 1, 600, &screen),
              "a degenerate screen size is rejected");

        Vec2 a, b;
        Check(ClipLineToScreen(Vector(0.f, 0.f, -2.f), Vector(0.f, 0.f, 2.f), identity, 800, 600,
                               &a, &b),
              "a segment crossing the near plane is clipped and projected");
        Check(a.y >= 0.f && a.y <= 600.f, "the clipped end lands inside the screen");
        Check(!ClipLineToScreen(Vector(0.f, 0.f, -5.f), Vector(0.f, 0.f, -2.f), identity, 800, 600,
                                &a, &b),
              "a segment fully behind the camera is rejected");

        Rect bounds;
        Check(ProjectBoundsRect(Vector(-10.f, -10.f, 1.f), Vector(10.f, 10.f, 1.f), identity,
                                800, 600, &bounds),
              "a world box in front of the camera yields a screen rect");
        CheckNear(bounds.w, 4000.f, "the rect spans the projected box width (800*10/2)");
        CheckNear(bounds.h, 3000.f, "the rect spans the projected box height (600*10/2)");
        Check(!ProjectBoundsRect(Vector(-1.f, -1.f, -5.f), Vector(1.f, 1.f, -4.f), identity,
                                 800, 600, &bounds),
              "a box fully behind the camera yields no rect");

        ElementList projected;
        Element textElement;
        textElement.kind = ElementKind::Text;
        textElement.text.text = "enemy";
        textElement.width = 40.f;
        textElement.height = 10.f;
        projected.Add(textElement);
        DrawSink sink;
        Check(RenderPlayer(projected, Vector(-10.f, -10.f, 1.f), Vector(10.f, 10.f, 1.f), identity,
                           800, 600, 2.f, 1.f, true, sink),
              "the player entry projects the bounds and renders the layout");
        CheckInt(static_cast<int>(sink.commands.size()), 1,
                 "one text element emits one command through the projected path");
        DrawSink offscreen;
        Check(!RenderPlayer(projected, Vector(-1.f, -1.f, -5.f), Vector(1.f, 1.f, -4.f), identity,
                            800, 600, 2.f, 1.f, true, offscreen),
              "a player behind the camera renders nothing");
        Check(offscreen.commands.empty(), "the offscreen sink is empty");

        CheckNear(InterpolateScale(0.f, kScaleBaseA, kScaleSpanA), 0.92f,
                  "the free-scale interpolation starts at 0.92");
        CheckNear(InterpolateScale(1.f, kScaleBaseA, kScaleSpanA), 1.f,
                  "the free-scale interpolation reaches 1.0 at factor 1");
        CheckNear(InterpolateScale(1.f, kScaleBaseB, kScaleSpanB), 1.f,
                  "the second interpolation reaches 1.0 as well");
        Check(kAnchorFn == 0x180169260ULL && kScaleFactorAddress == 0x1803fcb6cULL,
              "the anchor body and the scale object retain their addresses");
        Check(kScaleInitWrite == 0x18017ac80ULL && kScaleComputeWrite == 0x18018b900ULL,
              "both writers of DAT_1803fcb6c are identified");
        CheckNear(ScaleFromExtents(170.f, 270.f), 0.f,
                  "the reference 170x270 extent produces scale zero");
        CheckNear(ScaleFromExtents(340.f, 540.f), 1.f,
                  "double the reference extent produces scale one");
        CheckNear(ScaleFromExtents(255.f, 405.f), 0.5f,
                  "a half-size increase averages to 0.5");
    }

    std::printf("\n%s (%d failure%s)\n",
                g_failures == 0 ? "VISUAL SELFTEST PASS" : "VISUAL SELFTEST FAIL",
                g_failures, g_failures == 1 ? "" : "s");
    return g_failures == 0 ? 0 : 1;
}
