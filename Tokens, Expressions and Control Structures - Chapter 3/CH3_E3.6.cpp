#include <iostream>
#include <iomanip>
#include <string>

struct Player {
    std::string name;
    int runs;
    int innings;
    int notOut;
    double average;
};

int main() {
    const int NUM_PLAYERS = 3;
    Player players[NUM_PLAYERS] = {
        {"Sachin", 8430, 230, 18},
        {"Saurav", 4200, 130, 9},
        {"Rahul", 3350, 105, 11}
    };

    std::cout << std::setw(10) << "Name" 
              << std::setw(10) << "Runs" 
              << std::setw(10) << "Innings" 
              << std::setw(15) << "Times Not Out" 
              << std::setw(10) << "Average" 
              << std::endl;

    for (int i = 0; i < NUM_PLAYERS; i++) {
        players[i].average = static_cast<double>(players[i].runs) / (players[i].innings - players[i].notOut);

        std::cout << std::setw(10) << players[i].name 
                  << std::setw(10) << players[i].runs 
                  << std::setw(10) << players[i].innings 
                  << std::setw(15) << players[i].notOut 
                  << std::setw(10) << std::fixed << std::setprecision(2) << players[i].average 
                  << std::endl;
    }
}
