#include <iostream>
#include <vector>
#include <string>


int main() {
    
    std::vector<std::string> notes;
    
    int choice;
    while (true) {
        std::cout << "-------------------" << std::endl;
        std::cout << "1. Add note " << std::endl;
        std::cout << "2. Show notes " << std::endl;
        std::cout << "3. Edit note " << std::endl;
        std::cout << "4. Delete note " << std::endl;
        std::cout << "5. Exit " << std::endl;
        std::cout << "-------------------" << std::endl;

        std::cout << "Pick an option:" << std::endl;
        std::cin >> choice;
        std::cin.ignore();

        if (choice == 1) {
            std::string note;
            std::cout << "Make a note: " << std::endl;
            std::getline(std::cin, note);
            notes.push_back(note);
            std::cout << "Your note: " << note << std::endl;
        } else if (choice == 2) {
            std::cout << "All your notes: " << std::endl;
            int counter = 0;
            for (std::string n : notes) {
                counter++;
                std::cout << counter << ": " << n << std::endl << std::endl;
            }
        } else if (choice == 3) {
            // TODO: edytuj notatki
        } else if (choice == 4) {
            // TODO: usuń notatkę
        } else if (choice == 5) {
            break;
        } else {
            std::cout << "Pick a right number" << std::endl;
            break;
        }
    }
    return 0;
}