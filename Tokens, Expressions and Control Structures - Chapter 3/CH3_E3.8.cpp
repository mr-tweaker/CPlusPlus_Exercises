#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    std::cout << std::fixed << std::setprecision(4);

    std::cout << std::setw(10) << "x" << std::setw(20) << "y = e^-x" << std::endl;

    for (double x = 0; x <= 10; x += 0.1) {
        double y = std::exp(-x);
        std::cout << std::setw(10) << x << std::setw(20) << y << std::endl;
    }
}
