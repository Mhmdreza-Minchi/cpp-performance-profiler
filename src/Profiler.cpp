
#include "profiler/Profiler.hpp"

#include <iostream>

namespace profiler {

Profiler::Profiler()
    : version_("0.0.1") {
}

void Profiler::displayWelcomeMessage() const {
    std::cout << "================================\n";
    std::cout << " C++ Performance Profiler\n";
    std::cout << " & Memory Analyser\n";
    std::cout << "================================\n";
    std::cout << "Version: " << version_ << "\n";
    std::cout << "Status: Initialised\n";
}

std::string Profiler::getVersion() const {
    return version_;
}

} // namespace profiler
