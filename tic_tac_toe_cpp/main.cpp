#include <iostream>
#include <algorithm>
#include <cctype>

int main() {

    std::string choice;
    std::cout << "Do you want to play Xs or Os?" << std::endl;
    std::cin >> choice;

    std::transform(choice.begin(), choice.end(), choice.begin(), ::tolower);
    if (choice == "x") {
        int col = 11;
        int row = 5;

        std::cout << std::endl << std::endl;
        
        std::string stop = " ";

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (i == 1 || i == 3) {
                    std::cout << "-";
                } else {
                    if ((j >= 0 && j < 3) || (j > 3 && j < 7) || j > 7 ) {
                        std::cout << stop;
                    } else std::cout << "|";
                }
            }
            std::cout << std::endl;
        }

        std::cout << std::endl << std::endl;
    }

    return 0;
}