
#include "profiler/Profiler.hpp"
#include <iostream>

using namespace std;

namespace profiler {

Profiler::Profiler()
    : version_("0.0.1") {
}

void Profiler::displayWelcomeMessage() const {
    cout << "================================\n";
    cout << " C++ Performance Profiler\n";
    cout << " & Memory Analyser\n";
    cout << "================================\n";
    cout << "Version: " << version_ << "\n";
    cout << "Status: Initialised\n";
}

string Profiler::getVersion() const {
    return version_;
}

} // namespace profiler
