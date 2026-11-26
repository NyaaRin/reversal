#pragma once
// Runtime entry point for the reconstructed Utility-tab renderer.  Called from
// HookFrameStageNotify's FRAME_RENDER_START branch (the recovered stage-6 UI
// path), not from a test harness.

namespace sf {
namespace renderer {

void RenderUtilityFrame();
void InitializeRendererD3d(void* device);
void RenderRendererD3d();
void ResetRendererD3d();
void ShutdownRendererFrame();

} // namespace renderer
} // namespace sf
