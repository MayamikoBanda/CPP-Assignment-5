#include <iostream>

int adder(int a, int b) {
    return a + b;
}

double adder(double a, double b) {
    return a + b;
}

int main() {

    std::cout << adder(5, 10) << std::endl;

    std::cout << adder(5.0, 10.0) << std::endl;

    return 0;
} 