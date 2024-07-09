#include <iostream>
#include <iomanip>

void printInvestmentTable(double principal, double rate, int years) {
    
    std::cout << std::setw(5) << "Year" << std::setw(15) << "Value (V)" << std::endl;
    std::cout << std::string(20, '-') << std::endl;

    double V = principal;
    for (int year = 1; year <= years; ++year) {
        
        V *= (1 + rate);

        std::cout << std::setw(5) << year << std::fixed << std::setprecision(2) << std::setw(15) << V << std::endl;
    }
}

int main() {
    double principal, rate;
    int years;
    
    std::cout << "Enter principal amount (P): ";
    std::cin >> principal;

    std::cout << "Enter annual interest rate (r): ";
    std::cin >> rate;

    std::cout << "Enter number of years (n): ";
    std::cin >> years;

    printInvestmentTable(principal, rate, years);
}
