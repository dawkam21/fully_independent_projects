#include <iostream>
#include <vector>
#include <string>
#include <sstream>

int main() {
    
    std::vector<std::string> notes;

    int choice;
    while (true) {
        std::cout << std::endl;
        std::cout << "-------------------" << std::endl;
        std::cout << "1. Add note " << std::endl;
        std::cout << "2. Show notes " << std::endl;
        std::cout << "3. Edit note " << std::endl;
        std::cout << "4. Delete note " << std::endl;
        std::cout << "5. Exit " << std::endl;
        std::cout << "-------------------" << std::endl;

        std::cout << std::endl << "Pick an option:" << std::endl;
        
        int counter = 0;
        std::string note;
        std::cin >> choice;
        std::cin.ignore();

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
                notes.erase(notes.begin() + (index - 1));
            }

        } else if (choice == 5) {
            std::cout << std::endl << "Good bye!" << std::endl;
            break;
        } else {

            if (std::cin.fail()) {
                std::cout << std::endl << "That's not a number" << std::endl;

                std::cin.clear();
                std::cin.ignore(1000, '\n');

                continue;
            }

            std::cout << std::endl << "Pick only available number" << std::endl;
            continue;
        }
    }
    return 0;
}