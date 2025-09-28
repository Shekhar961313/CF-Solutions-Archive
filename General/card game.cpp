#include <iostream>

int getRoundWinner(int suneetCard, int slavicCard) {
    if (suneetCard > slavicCard) {
        return 1;
    } else if (slavicCard > suneetCard) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t; 

    while (t--) {
        int a1, a2, b1, b2;
        std::cin >> a1 >> a2 >> b1 >> b2; 

        int suneetWinsCount = 0;

        int scoreCase1 = getRoundWinner(a1, b1) + getRoundWinner(a2, b2);
        if (scoreCase1 > 0) {
            suneetWinsCount += 2;
        }

        int scoreCase2 = getRoundWinner(a1, b2) + getRoundWinner(a2, b1);
        if (scoreCase2 > 0) {
            suneetWinsCount += 2;
        }

        std::cout << suneetWinsCount << std::endl;
    }

    return 0;
}