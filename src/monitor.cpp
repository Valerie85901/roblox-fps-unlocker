// monitor.cpp — part of roblox-fps-unlocker.

#include "robloxfpsunlocker/monitor.h"

#include <cstdio>

namespace robloxfpsunlocker {

Monitor::Monitor(const std::string& config_path)
    : config_path_(config_path) {}

void Monitor::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Monitor::run() {
    if (verbose_) std::fprintf(stderr, "[roblox-fps-unlocker] monitor: run\n");
    // core logic lives here
    return true;
}

}  // namespace robloxfpsunlocker
