
#include "profiler/ScopedTimer.hpp"

#include <iostream>
#include <utility>

using namespace std;

namespace profiler {

ScopedTimer::ScopedTimer(string name)
    : name_(move(name)), timer_() {
}

ScopedTimer::~ScopedTimer() {
    cout << name_ << " took "
         << timer_.elapsedMilliseconds()
         << " ms\n";
}

}
