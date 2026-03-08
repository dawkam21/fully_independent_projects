#include <iostream>
#include <vector>
#include <string>
#include <sstream>

int main() {
    
    std::vector<std::string> notes;
    bool isFalse = false;
    int choice;
    while (!isFalse) {
        std::cout << std::endl;
        std::cout << "-------------------" << std::endl;
        std::cout << "1. Add note " << std::endl;
        std::cout << "2. Show notes " << std::endl;
        std::cout << "3. Edit note " << std::endl;
        std::cout << "4. Delete note " << std::endl;
        std::cout << "5. Exit " << std::endl;
        std::cout << "-------------------" << std::endl;

        std::cout << std::endl << "Pick an option:" << std::endl;
        std::cin >> choice;
        std::cin.ignore();

        int counter = 0;
        std::string note;
        if (choice == 1) {
            std::cout << std::endl << "Make a note: " << std::endl;
            std::getline(std::cin, note);
            notes.push_back(note);
            std::cout << std::endl << "Your note: " << note << std::endl;
        } else if (choice == 2) {
            std::cout << std::endl << "All your notes: " << std::endl;
            for (std::string n : notes) {
                counter++;
                std::cout << counter << ": " << n << std::endl << std::endl;
            }
        } else if (choice == 3) {
            std::cout << std::endl << "All your notes: " << std::endl;
            for (std::string n : notes) {
                counter++;
                std::cout << counter << ": " << n << std::endl << std::endl;
            }

            int index;
            std::cout << std::endl << "Which note do you want to edit?: " << std::endl;
            std::cin >> index;
            std::cin.ignore();

            if (index > 0 && index <= notes.size()) {
                std::string editedNote;

                std::cout << "Edit your note" << std::endl;
                std::getline(std::cin, editedNote);

                notes[index - 1] = editedNote;

                std::cout << "Edited note: " << editedNote << std::endl;
            }
        } else if (choice == 4) {
            std::cout << std::endl << "All your notes: " << std::endl;
            for (std::string n : notes) {
                counter++;
                std::cout << counter << ": " << n << std::endl << std::endl;
            }

            int index;
            std::cout << std::endl << "Which note do you want to delete?: " << std::endl;
            std::cin >> index;
            std::cin.ignore();

            if (index > 0 && index <= notes.size()) {
                notes[index - 1].clear();
            }

        } else if (choice == 5) {
            break;
        } else {
            std::cout << "Pick only available number" << std::endl;
            isFalse = true;
        }
    }
    return 0;
}