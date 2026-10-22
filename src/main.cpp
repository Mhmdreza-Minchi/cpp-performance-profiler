
#include "profiler/Profiler.hpp"
#include "profiler/Benchmark.hpp"

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

int main() {
    profiler::Profiler app;
    app.displayWelcomeMessage();

    vector<int> original(10000);

    mt19937 generator(42);
    uniform_int_distribution<int> distribution(1, 100000);

    for (int& number : original) {
        number = distribution(generator);
    }

    auto result = profiler::Benchmark::run(
        "std::sort benchmark",
        [&original]() {
            vector<int> data = original;
            sort(data.begin(), data.end());
        },
        10
    );

    cout << "\nBenchmark Results\n";
    cout << "----------------------\n";
    cout << "Name: " << result.name << "\n";
    cout << "Average: " << result.averageMs << " ms\n";
    cout << "Minimum: " << result.minMs << " ms\n";
    cout << "Maximum: " << result.maxMs << " ms\n";

    return 0;
}
