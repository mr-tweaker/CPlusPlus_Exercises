#include <iostream>

const int NUM_CANDIDATES = 5;

void countVotes(int ballots[], int size, int counts[], int& spoiltBallots) {

    for (int i = 0; i < NUM_CANDIDATES; i++) {
        counts[i] = 0;
    }
    spoiltBallots = 0;

    for (int i = 0; i < size; i++) {
        if (ballots[i] >= 1 && ballots[i] <= NUM_CANDIDATES) {
            counts[ballots[i] - 1]++;
        } else {
            spoiltBallots++;
        }
    }
}

int main() {
    const int MAX_BALLOTS = 100;
    int ballots[MAX_BALLOTS];
    int numBallots;

    std::cout << "Enter number of ballots: ";
    std::cin >> numBallots;

    std::cout << "Enter the ballots (numbers 1 to 5):" << std::endl;
    for (int i = 0; i < numBallots; i++) {
        std::cin >> ballots[i];
    }

    int counts[NUM_CANDIDATES];
    int spoiltBallots;

    countVotes(ballots, numBallots, counts, spoiltBallots);

    std::cout << std::endl << "Election Results:" << std::endl;
    for (int i = 0; i < NUM_CANDIDATES; ++i) {
        std::cout << "Candidate " << (i + 1) << ": " << counts[i] << " votes" << std::endl;
    }
    std::cout << "Spoilt Ballots: " << spoiltBallots << std::endl;

    return 0;
}
