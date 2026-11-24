// main.cpp — entry point. Wires config and subsystems together.

#include "robloxfpsunlocker/settings.h"
#include "robloxfpsunlocker/unlocker.h"
#include "robloxfpsunlocker/profiles.h"
#include "robloxfpsunlocker/monitor.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    robloxfpsunlocker::Settings settings = robloxfpsunlocker::Settings::load_default();
    robloxfpsunlocker::Unlocker unlocker(settings.store_path);
    robloxfpsunlocker::Profiles profiles(settings.store_path);
    robloxfpsunlocker::Monitor monitor(settings.store_path);
    std::fprintf(stderr, "[roblox-fps-unlocker] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
