
#include "profiler/Timer.hpp"

using namespace std;

namespace profiler {

Timer::Timer()
    : start_(chrono::steady_clock::now()) {
}

void Timer::reset() {
    start_ = chrono::steady_clock::now();
}

double Timer::elapsedMilliseconds() const {
    auto end = chrono::steady_clock::now();

    chrono::duration<double, milli> elapsed = end - start_;

    return elapsed.count();
}

}
