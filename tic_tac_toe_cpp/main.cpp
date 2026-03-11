#include <iostream>
#include <algorithm>

void DisplayBoard(char Board[3][3]) {
    for (int i = 0; i < 3; i++) { // i = 0, 1, 2 
        for (int j = 0; j < 3; j++) { // j = 0, 1, 2
            std::cout << Board[i][j] << " "; // '1' = Board[0, 0], '9' = Board[2, 2] 
        }
        std::cout << std::endl;
    }
}

int main() {

    char Board[3][3] = {
        {'1', '2', '3'}, 
        {'4', '5', '6'}, 
        {'7', '8', '9'} 
    };

    bool isRunning = false;
    std::string choice;
    std::cout << "Do you want to play Xs or Os?" << std::endl;
    std::cin >> choice;

    std::transform(choice.begin(), choice.end(), choice.begin(), ::tolower);
    if (choice == "x") {
        std::cout << "Pick a number to start the game!" << std::endl;
        DisplayBoard(Board);
        int square;
        std::cin >> square;
        if (square > 0 && square < 10) {
            if (square == 5) {
                Board[1][1] = 'X';
                DisplayBoard(Board);
            }
        }
    } 

    return 0;
}