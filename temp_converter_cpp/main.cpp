#include <iostream>

// °F = (°C × 1,8) + 32
// °C = (°F - 32) x 5/9 (5/9 musi być float stąd 5.0f) 

int main() {
    int choice;
    float temp;
    std::cout << "Temperature Converter" << std::endl;
    std::cout << "---------------------" << std::endl;
    std::cout << "Fahrenheit to Celsius - 1 / otherwise - 2" << std::endl;
    std::cin >> choice;
    
    while (choice == 1 || choice == 2) {
        
        if (choice == 1) {
            std::cout << "Value: " << std::endl;
            std::cin >> temp;
            float tempC;
            tempC = (temp - 32) * (5.0f / 9.0f);
            std::cout << temp << " °F" << " = " << tempC << " °C" << std::endl;
        } else if (choice == 2) {
            std::cout << "Value: " << std::endl;
            std::cin >> temp;
            float tempF;
            tempF = (temp * 1.8) + 32;
            std::cout << temp << " °C" << " = " << tempF << " °F" << std::endl;
        } else {
            std::cout << "Pick right number" << std::endl;
            break;
        }

        std::cout << "Again? Pick a number - Fahrenheit to Celsius - 1 / otherwise - 2" << std::endl;
        std::cin >> choice;
    }

    std::cout << "Program ended." << std::endl;
    return 0;
}