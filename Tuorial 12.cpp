#include <iostream>

namespace g1 {
    int calculate(int a, int b) {
        return a + b;
    }
}

namespace g2 {
    int calculate(int a, int b) {
        return a - b;
    }
}

int main() {
    int a = 20, b = 10;

    std::cout << "Addition: " << g1::calculate(a, b) << std::endl;
    std::cout << "Subtraction: " << g2::calculate(a, b) << std::endl;

    return 0;
}
