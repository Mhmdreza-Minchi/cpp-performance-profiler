
#pragma once

#include "profiler/Timer.hpp"

#include <string>

namespace profiler {

class ScopedTimer {
public:
    explicit ScopedTimer(std::string name);
    ~ScopedTimer();

private:
    std::string name_;
    Timer timer_;
};

}
