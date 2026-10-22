#pragma once 
#include<chrono>

namespace profiler{

    class Timer{
        public:
            Timer();
            void reset();
            double elapsedMilliseconds() const;

        private:
            std::chrono::steady_clock::time_point start_;
    };
}