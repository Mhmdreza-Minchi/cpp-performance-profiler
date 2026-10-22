
#pragma once

#include <functional>
#include <string>
#include <vector>

namespace profiler {

struct BenchmarkResult {
    std::string name;
    std::vector<double> samples;
    double averageMs;
    double minMs;
    double maxMs;
};

class Benchmark {
public:
    static BenchmarkResult run(
        const std::string& name,
        const std::function<void()>& function,
        int iterations
    );
};

}
