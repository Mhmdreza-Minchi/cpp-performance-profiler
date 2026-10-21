
#include "profiler/Profiler.hpp"

#include <iostream>
#include <string>

int main() {
    profiler::Profiler app;

    const std::string expected = "0.0.1";
    const std::string actual = app.getVersion();

    if (actual != expected) {
        std::cerr << "FAIL: Incorrect version\n";
        return 1;
    }

    std::cout << "PASS: Profiler version test\n";

    return 0;
}
