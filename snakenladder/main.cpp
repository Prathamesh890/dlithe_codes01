#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int rollDice() {
    return rand() % 6 + 1;
}


int checkSnakesAndLadders(int pos) {
    // Ladders
    if (pos == 3) pos = 22;
    else if (pos == 5) pos = 8;
    else if (pos == 11) pos = 26;
    else if (pos == 20) pos = 29;

    // Snakes
    else if (pos == 17) pos = 4;
    else if (pos == 19) pos = 7;
    else if (pos == 21) pos = 9;
    else if (pos == 27) pos = 1;

    return pos;
}

int main() {
    srand(time(0)); // Seed the random number generator

    int player1 = 0, player2 = 0;
    int currentPlayer = 1;

    cout << "🎲 Welcome to Snake and Ladder Game! 🎲\n";
    cout << "First player to reach 100 wins!\n";

    while (true) {
        cout << "\nPlayer " << currentPlayer << "'s turn. Press Enter to roll the dice...";
        cin.ignore();

        int dice = rollDice();
        cout << "You rolled a " << dice << "!\n";

        if (currentPlayer == 1) {
            if (player1 + dice <= 100)
                player1 += dice;

            player1 = checkSnakesAndLadders(player1);
            cout << "Player 1 is now at position " << player1 << "\n";

            if (player1 == 100) {
                cout << "🎉 Player 1 wins the game! 🎉\n";
                break;
            }
            currentPlayer = 2; // Switch turn
        }
        else {
            if (player2 + dice <= 100)
                player2 += dice;

            player2 = checkSnakesAndLadders(player2);
            cout << "Player 2 is now at position " << player2 << "\n";

            if (player2 == 100) {
                cout << "🎉 Player 2 wins the game! 🎉\n";
                break;
            }
            currentPlayer = 1;
        }
    }

    return 0;
}
