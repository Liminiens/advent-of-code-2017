#include <iostream>

using std::cout; using std::endl;

int manhattan_distance(const int &number) {
    // |p1-q1|+|p2-q2|
    int result = 0;
    int y = 0;
    // [n+2^2-4(n-1)+1; n^2] for n > 1, n+=2
    for (int i = 3; i < INT32_MAX; i += 2) {
        const auto right_bound = i * i;
        const auto left_bound = right_bound - 4 * (i - 1) + 1;
        //cout << left_bound << " " << right_bound << endl;
        if (number <= right_bound && number >= left_bound) {
            y = i;
        }
    }
    return y;
}

int main() {
    constexpr auto number = 361527;
    std::cout << manhattan_distance(number);
    std::cin.get();
    return 0;
}