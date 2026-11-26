#pragma once
// Live 2D visual overlay. The renderer owns the ImGui frame; this entry point
// is called once per frame and draws the configured visual features through the
// foreground draw list. Keeping the draw code in the runtime lets it use the
// same entity/netvar/engine interfaces as the rest of the feature layer.

struct ImDrawList;

namespace sf {
namespace runtime {

void DrawRuntimeVisuals(ImDrawList* draw, int width, int height);

// Re-reads skyfall.ini without re-injecting. The renderer calls this from its
// window procedure (F5), which makes visual/feature toggles live.
void RequestConfigReload();

} // namespace runtime
} // namespace sf
