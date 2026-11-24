// unlocker.cpp — part of roblox-fps-unlocker.

#include "robloxfpsunlocker/unlocker.h"

#include <cstdio>

namespace robloxfpsunlocker {

Unlocker::Unlocker(const std::string& config_path)
    : config_path_(config_path) {}

void Unlocker::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Unlocker::run() {
    if (verbose_) std::fprintf(stderr, "[roblox-fps-unlocker] unlocker: run\n");
    // core logic lives here
    return true;
}

}  // namespace robloxfpsunlocker
