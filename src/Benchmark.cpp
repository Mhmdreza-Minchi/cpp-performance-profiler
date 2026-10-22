
#include "profiler/Benchmark.hpp"
#include "profiler/Timer.hpp"

#include <algorithm>
#include <numeric>
#include <stdexcept>

using namespace std;

namespace profiler {

BenchmarkResult Benchmark::run(
    const string& name,
    const function<void()>& function,
    int iterations
) {
    if (iterations <= 0) {
        throw invalid_argument(
            "Iterations must be greater than zero"
        );
    }

    vector<double> samples;
    samples.reserve(iterations);

    for (int i = 0; i < iterations; i++) {
        Timer timer;

        function();

        double elapsed = timer.elapsedMilliseconds();
        samples.push_back(elapsed);
    }

    double total = accumulate(
        samples.begin(),
        samples.end(),
        0.0
    );

    double average = total / iterations;

    double minimum = *min_element(
        samples.begin(),
        samples.end()
    );

    double maximum = *max_element(
        samples.begin(),
        samples.end()
    );

    return {
        name,
        samples,
        average,
        minimum,
        maximum
    };
}

}
