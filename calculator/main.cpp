#include <iostream>

int add(int a, int b) {
    return a + b;
}

int substract(int a, int b) {
    return a - b;
}

int mult(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return double(a / b);
}

int choice;
int y, z;

int main() {

    std::cout << "Pick a number: " << std::endl;
    std::cout << "1. ADD" << std::endl;
    std::cout << "2. SUBSTRACT" << std::endl;
    std::cout << "3. MULTIPLE" << std::endl;
    std::cout << "4. DIVIDE" << std::endl;
    std::cout << "5. EXIT" << std::endl;
    std::cin >> choice;

    std::cout << "Pick two numbers" << std::endl;
    std::cin >> y;
    std::cin >> z;

    if (choice == 1) 
        std::cout << "Result: " << add(y, z) << std::endl;
    else if (choice == 2) 
        std::cout << "Result: " << substract(y, z) << std::endl;
    else if (choice == 3)
        std::cout << "Result: " << mult(y, z) << std::endl;
    else if (choice == 4)
        std::cout << "Result: " << divide(double(y), double(z)) << std::endl;
    
    return 0;

}