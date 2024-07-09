#include <iostream>
#include <cmath>

double factorial(int n) {
    double result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

double cosine(double x) {
    double term = 1;
    double sum = term;
    int n = 0;

    while (std::fabs(term) > 0.000001) {
        n += 2;
        term = -term * x * x / ((n - 1) * n);
        sum += term;
    }
    return sum;
}

int main() {
    double x;
    std::cout << "Enter the value of x (in radians): ";
    std::cin >> x;

    double result = cosine(x);
    std::cout << "cos(" << x << ") = " << result << std::endl;
}
