#include <iostream>

int main(int args, char* argv[]){ // argv[0] -> Start command

    if (args != 3){return 0;}
    else {
        std::cout << static_cast<int>(*(argv[1])) << " " << static_cast<int>(*(argv[2])) << " " << *(argv[1]) + *(argv[2]) << "\n";
        std::cout << typeid(*(argv[1])).name() << " " << typeid(static_cast<int>(*(argv[1]))).name() << "\n";
        std::cout << atoi((argv[1])) + atoi((argv[2])) << "\n";
    }

    return 0;
}