#include <iostream>
#include <algorithm>
#include <list>

void DisplayBoard(char Board[3][3]) {
    std::cout << std::endl;
    for (int i = 0; i < 3; i++) { // i = 0, 1, 2 
        for (int j = 0; j < 3; j++) { // j = 0, 1, 2
            std::cout << Board[i][j] << " "; // '1' = Board[0, 0], '9' = Board[2, 2] 
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
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
    std::cin.ignore();
    
    while (!isRunning) {
        std::transform(choice.begin(), choice.end(), choice.begin(), ::tolower);
        if (choice == "x") {
            std::cout << "Pick a number" << std::endl;
            DisplayBoard(Board);
            int playersChoice;
            char square[0][0];
            std::list<int> squares;
            std::cin >> playersChoice;

            if (playersChoice == 1) {
                Board[0][0] = 'X';
            } else if (playersChoice == 2) {
                Board[0][1] = 'X';
            } else if (playersChoice == 3) {
                Board[0][2] = 'X';
            } else if (playersChoice == 4) {
                Board[1][0] = 'X';
            } else if (playersChoice == 5) {
                Board[1][1] = 'X';
            } else if (playersChoice == 6) {
                Board[1][2] = 'X';
            } else if (playersChoice == 7) {
                Board[2][0] = 'X';
            } else if (playersChoice == 8) {
                Board[2][1] = 'X';
            } else if (playersChoice == 9) {
                Board[2][2] = 'X';
            } else {
                std::cout << "Pick a right number!" << std::endl;
                continue;
            }
            DisplayBoard(Board);
        }
    }
    return 0;
}