#pragma once
// The eight Features::Visual::ESP::Editor::Elements::* classes (Stage 3.6).
//
// Class, vtable and slot addresses come from re/dump/rtti_classes.tsv and
// re/dump/vtable_methods.tsv. Field offsets and defaults come from each class's
// vfunc04 — the editor inspector — which is where the labels and ranges are
// actually spelled out:
//
//   BoxElement        0x180169760  Color/Rounding/Filled/Thickness
//   BBoxElement       0x18016aa90  style enum, Color by Job, Protected, Outline
//   TextElement       0x18016d2d0  Color by Job, Shadow, text buffer
//   ArmorBarElement   0x18016c890  "Combine with HP bar"
//
// vfunc04 is *editor UI*, not drawing: those bodies call ImGui helpers
// (FUN_1802aac00 separator, FUN_1802bac60 colour picker, FUN_1801a0b60 checkbox,
// FUN_1801a6c50 drag-int, FUN_1802b74e0 input-text). The reconstruction models the
// same properties as data, and emits draw commands through a sink so the ordering
// and geometry are testable without ImGui.
//
// Colour resolution is vfunc10 of TextElement at 0x18016ccc0: the stored colour
// is a float RGBA at +0x40; when "color by job" (+0x81) is set and a job colour
// callback exists (DAT_1803fe548), it is replaced by the callback's RGB divided
// by DAT_1803811c8 (255) with the element alpha kept.

#include <cstdint>
#include <string>
#include <vector>

#include "layout.h"
#include "to_screen.h"

namespace sf {
namespace visual {

// ---------------------------------------------------------------- colour
struct Color
{
    float r = 1.f, g = 1.f, b = 1.f, a = 1.f;
};

inline constexpr float kColorScale = 255.f;   // 0x1803811c8

// 0x18016ccc0: stored colour, optionally replaced by the job colour. The alpha
// slot keeps the element's own alpha (float at +0x4c in TextElement).
inline Color ResolveColor(const Color& stored, float storedAlpha, bool colorByJob,
                          bool haveJobColor, uint8_t jobR, uint8_t jobG, uint8_t jobB)
{
    if (colorByJob && haveJobColor)
    {
        Color out;
        out.r = static_cast<float>(jobR) / kColorScale;
        out.g = static_cast<float>(jobG) / kColorScale;
        out.b = static_cast<float>(jobB) / kColorScale;
        out.a = storedAlpha;
        return out;
    }
    return stored;
}

// ------------------------------------------------------------- element kinds
// Vtable RVAs from the RTTI table; the slot columns are the observed bodies.
enum class ElementKind : int
{
    Base = 0,
    BBox,
    Box,
    Circle,
    Text,
    DynamicText,
    HealthBar,
    ArmorBar,
};

struct ElementInfo
{
    const char* className;
    uint64_t vtableRva;
    ElementKind kind;
};

inline constexpr ElementInfo kElements[] = {
    { "Features::Visual::ESP::Editor::Elements::BaseElement",        0x33ad18, ElementKind::Base },
    { "Features::Visual::ESP::Editor::Elements::BBoxElement",        0x338b20, ElementKind::BBox },
    { "Features::Visual::ESP::Editor::Elements::BoxElement",         0x33e2e8, ElementKind::Box },
    { "Features::Visual::ESP::Editor::Elements::CircleElement",      0x33da60, ElementKind::Circle },
    { "Features::Visual::ESP::Editor::Elements::TextElement",        0x33a4c8, ElementKind::Text },
    { "Features::Visual::ESP::Editor::Elements::DynamicTextElement", 0x33d9f8, ElementKind::DynamicText },
    { "Features::Visual::ESP::Editor::Elements::HealthBarElement",   0x33bb10, ElementKind::HealthBar },
    { "Features::Visual::ESP::Editor::Elements::ArmorBarElement",    0x339258, ElementKind::ArmorBar },
};
inline constexpr int kElementCount = 8;

// BBox drawing styles, in the order the editor lists them (0x18016aa90). The four
// literals are the image's own.
inline constexpr const char* kBBoxStyles[] = {
    "Full box", "Corner box", "Top + bottom", "Side rails"
};
inline constexpr int kBBoxStyleCount = 4;

// ------------------------------------------------------------ config fields
// Offsets are the ones the inspector bodies pass to the widgets. Offsets differ
// per class; each class documents its own.
struct BoxElementConfig
{
    Color color{ 1.f, 1.f, 1.f, 1.f };   // +0x48  "##box_color"
    int   rounding = 0;                  // +0x58  "##box_rounding", 0..8
    bool  filled = false;                // +0x60  "Filled"
    int   thickness = 1;                 // +0x5c  "##box_thickness", 1..10, only when !filled
};

struct BBoxElementConfig
{
    Color color{ 1.f, 1.f, 1.f, 1.f };   // +0x40  "##bbox_color"
    Color protectedColor{ 1.f, 0.f, 0.f, 1.f }; // +0x60 "##bbox_protected"
    Color outlineColor{ 0.f, 0.f, 0.f, 1.f };   // +0x50 "##bbox_outline"
    int   rounding = 0;                  // +0x70  "##bbox_rounding", 0..8
    int   thickness = 1;                 // +0x74  "##bbox_thickness", 1..5
    bool  filled = false;                // +0x78  "Filled##bbox"
    bool  outline = false;               // +0x79  "Outline"
    bool  showProtected = false;         // +0x7a  "Show Protected"
    int   style = 0;                     // +0x7c  "##bbox_style", 0..3
    bool  colorByJob = false;            // +0x80  "Color by Job"
};

struct TextElementConfig
{
    Color color{ 1.f, 1.f, 1.f, 1.f };   // +0x40  "##txt_color"
    Color shadowColor{ 0.f, 0.f, 0.f, 1.f }; // +0x50 "##txt_shadow"
    std::string text;                      // +0x60  "##txt_text"
    bool  shadow = false;                // +0x80  "Shadow##txt"
    bool  colorByJob = false;            // +0x81  "Color by Job"
};

struct HealthBarConfig
{
    Color color{ 1.f, 1.f, 1.f, 1.f };
    bool  combineArmor = false;          // +0xb8 on ArmorBar: "Combine with HP bar"
};

// ---------------------------------------------------------------- draw sink
// The engine's low-level surface calls are outside this reconstruction, so
// drawing is expressed as commands. The recovered paint-path element dispatcher
// is 0x180174130: it walks DAT_1803fb100..DAT_1803fb108, positions each element
// through 0x180171c50 (which calls the slot-8 anchor), and emits through
// 0x180173e80 / the per-kind element vfuncs. A sink receives the same command
// order; the element list dispatches in layout order (see ElementList::Render).
enum class DrawKind : int
{
    Rect = 0,
    RectOutline,
    Circle,
    CircleOutline,
    Bar,
    Text,
};

struct DrawCommand
{
    DrawKind kind = DrawKind::Rect;
    Rect rect;
    Color color;
    float thickness = 1.f;
    float radius = 0.f;
    std::string text;
    int element = -1;      // index in the layout list
};

struct DrawSink
{
    std::vector<DrawCommand> commands;

    void RectFill(const Rect& r, const Color& c, int element)
    {
        commands.push_back(DrawCommand{ DrawKind::Rect, r, c, 1.f, 0.f, std::string(), element });
    }
    void RectOutline(const Rect& r, const Color& c, float thickness, int element)
    {
        commands.push_back(DrawCommand{ DrawKind::RectOutline, r, c, thickness, 0.f, std::string(), element });
    }
    void Circle(const Rect& r, const Color& c, bool outline, float thickness, int element)
    {
        commands.push_back(DrawCommand{ outline ? DrawKind::CircleOutline : DrawKind::Circle, r, c,
                                        thickness, r.w * kHalf, std::string(), element });
    }
    void Bar(const Rect& r, const Color& c, int element)
    {
        commands.push_back(DrawCommand{ DrawKind::Bar, r, c, 1.f, 0.f, std::string(), element });
    }
    void Text(const Rect& r, const Color& c, const std::string& value, int element)
    {
        commands.push_back(DrawCommand{ DrawKind::Text, r, c, 1.f, 0.f, value, element });
    }
    void Clear() { commands.clear(); }
};

// -------------------------------------------------------------- the elements
struct Element
{
    ElementKind kind = ElementKind::Base;
    Anchor anchor = Anchor::CenterAbove;   // +8
    float offsetX = 0.f;                   // +0xc
    float offsetY = 0.f;                   // +0x10
    // Runtime geometry, not one saved config value: vfunc +0x10 supplies
    // width/height and +0x30 supplies line. The class may return fixed defaults,
    // stored size, screen extents or text metrics. 0x180171c50 reads them in the
    // paint/render path; the recovered read sites are not injection-time reads.
    float width = 0.f;
    float height = 0.f;
    float line = 0.f;                      // vfunc 0x30

    BoxElementConfig box;
    BBoxElementConfig bbox;
    TextElementConfig text;
    HealthBarConfig bar;
    Color stored{ 1.f, 1.f, 1.f, 1.f };
    float storedAlpha = 1.f;

    // Size/line are stored because callers supply them from each class's vfuncs
    // (0x180169190 / 0x1801691c0 for BaseElement, with per-class overrides).
    Vec2 Size() const { return Vec2{ width, height }; }

    Vec2 Place(const Rect& parent, Vec2 origin, float gap, float freeScale,
               bool freeScaleEnabled) const
    {
        const Vec2 at = AnchorPoint(anchor, parent, origin, width, height, line, gap);
        return ApplyOffset(at, offsetX, offsetY, anchor, freeScale, freeScaleEnabled);
    }
};

inline Rect ElementRect(const Element& e)
{
    return Rect{ 0.f, 0.f, e.width, e.height };
}

// Emission per kind. Ordering inside one element is fixed by the bodies' property
// order: fill, then outline, then text/shadow (BoxElement's editor lists Filled
// before Thickness; BBoxElement lists Outline after Filled and colours first).
inline void EmitElement(const Element& e, const Vec2& at, DrawSink& sink, int index)
{
    Rect local = ElementRect(e);
    local.x = at.x;
    local.y = at.y;

    switch (e.kind)
    {
    case ElementKind::Box:
        if (e.box.filled)
            sink.RectFill(local, e.box.color, index);
        else
            sink.RectOutline(local, e.box.color, static_cast<float>(e.box.thickness), index);
        break;

    case ElementKind::BBox:
    {
        const Color body = ResolveColor(e.bbox.color, e.bbox.color.a, e.bbox.colorByJob,
                                        e.storedAlpha != 0.f, 255, 255, 255);
        if (e.bbox.filled)
            sink.RectFill(local, body, index);
        else
            sink.RectOutline(local, body, static_cast<float>(e.bbox.thickness), index);
        if (e.bbox.outline)
            sink.RectOutline(local, e.bbox.outlineColor, 1.f, index);
        break;
    }

    case ElementKind::Circle:
        sink.Circle(local, e.stored, false, 1.f, index);
        break;

    case ElementKind::Text:
    case ElementKind::DynamicText:
    {
        const Color body = ResolveColor(e.stored, e.storedAlpha, e.text.colorByJob,
                                        e.storedAlpha != 0.f, 255, 255, 255);
        if (e.text.shadow)
        {
            Rect shadow = local;
            shadow.x += 1.f;
            shadow.y += 1.f;
            sink.Text(shadow, e.text.shadowColor, e.text.text, index);
        }
        sink.Text(local, body, e.text.text, index);
        break;
    }

    case ElementKind::HealthBar:
        sink.Bar(local, e.stored, index);
        break;

    case ElementKind::ArmorBar:
        sink.Bar(local, e.stored, index);
        break;

    case ElementKind::Base:
    default:
        break;
    }
}

// ------------------------------------------------------------ the list
// Elements are stored and rendered in layout order. Evidence: the layout writer
// 0x1801768e0 serialises the list under "esp.count" inside an
// "ESP editor layout" section, and nothing in the family carries a z-index or
// sort key. The order is therefore list order; an explicit sort would have left a
// comparator somewhere in the family and there is none.
struct ElementList
{
    std::vector<Element> items;

    int Add(const Element& e)
    {
        items.push_back(e);
        return static_cast<int>(items.size()) - 1;
    }

    // Paint-path dispatch mirroring 0x180174130: for each element in layout order,
    // place it against the shared anchor rect and emit. `layoutOrder` lets a
    // caller pass the stored indices explicitly (the layout file's order).
    void Render(const Rect& anchorRect, Vec2 origin, float gap, float freeScale,
                bool freeScaleEnabled, DrawSink& sink,
                const std::vector<int>* layoutOrder = nullptr) const
    {
        sink.Clear();
        if (layoutOrder != nullptr)
        {
            for (int index : *layoutOrder)
            {
                if (index < 0 || index >= static_cast<int>(items.size()))
                    continue;
                const Element& e = items[static_cast<std::size_t>(index)];
                EmitElement(e, e.Place(anchorRect, origin, gap, freeScale, freeScaleEnabled),
                            sink, index);
            }
            return;
        }
        for (std::size_t i = 0; i < items.size(); ++i)
        {
            const Element& e = items[i];
            EmitElement(e, e.Place(anchorRect, origin, gap, freeScale, freeScaleEnabled),
                        sink, static_cast<int>(i));
        }
    }
};

// Per-player entry: project the entity's world bounds to a screen rectangle with
// the recovered projection (0x1800207e0) and dispatch the element list against
// it. Returns false when the entity is behind the camera or fully off screen.
inline bool RenderPlayer(const ElementList& list, const Vector& mins, const Vector& maxs,
                         const ViewMatrix& view, int screenW, int screenH, float gap,
                         float freeScale, bool freeScaleEnabled, DrawSink& sink,
                         const std::vector<int>* layoutOrder = nullptr)
{
    Rect rect;
    if (!ProjectBoundsRect(mins, maxs, view, screenW, screenH, &rect))
    {
        sink.Clear();
        return false;
    }
    list.Render(rect, Vec2{ 0.f, 0.f }, gap, freeScale, freeScaleEnabled, sink, layoutOrder);
    return true;
}

} // namespace visual
} // namespace sf
