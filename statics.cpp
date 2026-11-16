#include "statistics.h"
#include <algorithm>
#include <numeric>

double Statistics::mean(const std::vector<int>& arr) {
    return std::accumulate(arr.begin(), arr.end(), 0.0) / arr.size();
}

double Statistics::median(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end());
    size_t n = arr.size();
    return n % 2 ? arr[n / 2] : (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
}
