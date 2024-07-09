#include <iostream>
#include <string>
#include <iomanip>

const double MIN_CHARGE = 50.00;
const double SURCHARGE_RATE = 0.15;

double calculateCharges(int units) {
    double charge = 0.0;

    if (units <= 100) {
        charge = units * 0.60;
    } else if (units <= 300) {
        charge = (100 * 0.60) + ((units - 100) * 0.80);
    } else {
        charge = (100 * 0.60) + (200 * 0.80) + ((units - 300) * 0.90);
    }

    if (charge < MIN_CHARGE) {
        charge = MIN_CHARGE;
    }

    if (charge > 300.00) {
        charge += charge * SURCHARGE_RATE;
    }

    return charge;
}

int main() {
    int numUsers;
    std::cout << "Enter the number of users: ";
    std::cin >> numUsers;

    std::string *names = new std::string[numUsers];
    int *unitsConsumed = new int[numUsers];

    for (int i = 0; i < numUsers; ++i) {
        std::cout << "Enter the name of user " << i + 1 << ": ";
        std::cin >> names[i];
        std::cout << "Enter the number of units consumed by " << names[i] << ": ";
        std::cin >> unitsConsumed[i];
    }

    std::cout << std::setw(20) << "Name" << std::setw(20) << "Units Consumed" << std::setw(20) << "Charge (Rs)" << std::endl;

    for (int i = 0; i < numUsers; ++i) {
        double charge = calculateCharges(unitsConsumed[i]);
        std::cout << std::setw(20) << names[i] << std::setw(20) << unitsConsumed[i] << std::setw(20) << std::fixed << std::setprecision(2) << charge << std::endl;
    }

    delete[] names;
    delete[] unitsConsumed;
}