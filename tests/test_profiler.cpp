#include "profiler/Profiler.hpp"
#include <iostream>
#include <string>

using namespace std;

int main() {
    profiler::Profiler app;

    const string expected = "0.0.1";
    const string actual = app.getVersion();

    if (actual != expected) {
        cerr << "FAIL: Incorrect version\n";
        return 1;
    }

    cout << "PASS: Profiler version test\n";

    return 0;
}
