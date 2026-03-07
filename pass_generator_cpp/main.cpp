#include <iostream>
#include <vector>
#include <cstdlib>

int main() {

    srand(time(0));

    int pass_length;
    std::string password = "";
    std::vector<char> password_list = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
        'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
        '0','1','2','3','4','5','6','7','8','9',
        '!','"','#','$','%','&','\'','(',')','*','+',
        ',','-','.','/',
        ':',';','<','=','>','?','@',
        '[','\\',']','^','_','`',
        '{','|','}','~'
    };
    
    
    std::cout << "Pick the length of password: " << std::endl;
    std::cin >> pass_length;
    
    for (int i = 0; i < pass_length; i++) {
        int indx = rand() % password_list.size();
        password.push_back(password_list[indx]);
    }


    std::cout << "Generated password: " << password << std::endl;

    return 0;
}