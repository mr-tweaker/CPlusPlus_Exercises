#include <iostream>
#include <cmath>

double calculateSeries(double accuracy) {
    double sum = 1.0;
    int n = 2;
    double term;

    do {
        term = std::pow(1.0 / n, n);
        sum += term;
        n++;
    } while (term > accuracy);

    return sum;
}

int main() {
    const double ACCURACY = 0.000001;

    double result = calculateSeries(ACCURACY);
    std::cout << "The sum of the series is approximately: " << result << std::endl;

    return 0;
}
