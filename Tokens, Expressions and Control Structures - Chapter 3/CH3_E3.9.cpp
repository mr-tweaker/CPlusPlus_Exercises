#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double calculateMean(const vector<double>& numbers) {
    double sum = 0.0;
    for (double num : numbers) {
        sum += num;
    }
    return sum / numbers.size();
}

double calculateVariance(const vector<double>& numbers, double mean) {
    double variance = 0.0;
    for (double num : numbers) {
        variance += pow(num - mean, 2);
    }
    return variance / numbers.size();
}

int main() {
    vector<double> numbers = {90.0, 1.0};
    
    double mean = calculateMean(numbers);
    double variance = calculateVariance(numbers, mean);
    double stdDev = sqrt(variance);
    
    cout << "Variance: " << variance << endl;
    cout << "Standard Deviation: " << stdDev << endl;
}