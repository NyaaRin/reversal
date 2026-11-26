#pragma once
// Narrow bridge between the recovered renderer/menu and the live runtime
// config.  The renderer is compiled into the same DLL; these functions are
// defined in skyfall.cpp so menu edits take effect without an F5 reload.

#include "config.h"

namespace sf {
namespace runtime {

Config& LiveConfig();
void ApplyLiveConfig();
void SaveLiveConfig();

} // namespace runtime
} // namespace sf
