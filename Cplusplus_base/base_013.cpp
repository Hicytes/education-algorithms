#include <iostream>

bool print(int n){
    std::cout << n << "\n";
    return true;
}

void void_print(int n){
    std::cout << n << "\n";
    // return;
}

int nontype_print(int n){
    std::cout << n << "\n";
    return 0;
}

main(){

    int n = 0;

    std::cin >> n;
    // std::cout << n << "\n";
    print(n);
    void_print(n);

    return 0;
}