#include <iostream>

int main(int args, char* argv[]){ // argv[0] -> Start command

    // std::cout << "args = " << args << " with argv[0] = " << argv[0] << "\n";
    std::cout << "args = " << args << "\n";
    for (int i = 0; i < args; i++){
        std::cout << "argv[" << i << "] = " << argv[i] << "\n";
    }

    return 0;
}