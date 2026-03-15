#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>

class Board {
public:
    void DisplayBoard(char board[3][3]);
    void ActualBoard(char board[3][3]);
    int filledCells;
};

class Player {
public:
    char symbol;
    std::string name;
};

void Board::DisplayBoard(char board[3][3]) {
    std::cout << "-------------" << std::endl;
    for (int i = 0; i < 3; i++) { // i = 0, 1, 2 
        std::cout << "| ";
        for (int j = 0; j < 3; j++) { // j = 0, 1, 2
            std::cout << board[i][j] << " | "; // '1' = Board[0, 0], '9' = Board[2, 2] 
        }
        std::cout << std::endl << "-------------" << std::endl;
    }
}

void Board::ActualBoard(char board[3][3]) {
    std::cout << std::endl;
    std::cout << "-------------" << std::endl;
    for (int i = 0; i < 3; i++) { // i = 0, 1, 2 
        std::cout << "|  ";
        for (int j = 0; j < 3; j++) { // j = 0, 1, 2
            std::cout << " |  "; // '1' = Board[0, 0], '9' = Board[2, 2] 
        }
        std::cout << std::endl << "-------------" << std::endl;
    }
    std::cout << std::endl;
}

int main() {

    Board myBoard;
    Player player;

    char board[3][3] = {
        {'1', '2', '3'}, 
        {'4', '5', '6'}, 
        {'7', '8', '9'} 
    };

    bool isPlaying = false;
    
    std::cout << "Welcome to Tic Tac Toe Game!" << std::endl << "That's your board " << std::endl << std::endl;
    myBoard.DisplayBoard(board);

    std::cout << "Do you want to play Xs or Os?" << std::endl << std::endl;
    
    while (!isPlaying) {
        std::string choice;
        std::cin >> choice;
        std::transform(choice.begin(), choice.end(), choice.begin(), [](unsigned char c) { return std::toupper(c); });
        if (choice == "X") {
            player.name = "Player X";
            player.symbol = 'X';
        } else if (choice == "O") {
            player.name = "Player O";
            player.symbol = 'O';
        } else {
            std::cout << "Pick valid symbol." << std::endl;
        }
        std::cout << std::endl << "You are " << player.name << " from now, let's start the game. Choose square from 1 to 9." << std::endl;

        myBoard.ActualBoard(board);
    }

    return 0;
}