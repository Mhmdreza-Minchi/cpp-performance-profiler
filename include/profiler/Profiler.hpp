
#pragma once

#include <string>

namespace profiler {

class Profiler {
public:
    Profiler();

    void displayWelcomeMessage() const;
    std::string getVersion() const;

private:
    std::string version_;
};

} // namespace profiler
