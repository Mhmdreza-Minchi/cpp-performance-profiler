#pragma once
#include <string>

using namespace std;

namespace profiler {

class Profiler {
public:
    Profiler();

    void displayWelcomeMessage() const;
    string getVersion() const;

private:
    string version_;
};

} // namespace profiler
