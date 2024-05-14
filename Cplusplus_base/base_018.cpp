#include <iostream>

int double_int(int n){
    return 2 * n;
}

void replace_double_int(int k){ // -> args copy to a new memory cell!!!
    
    k = k * 2;
    std::cout << "inside function replace_double_int k = " << k << "\n";
    std::cout << "pointer to k in function = " << &k << "\n";
    
    return;
} 

void correct_replace_double_int(int& k){ // -> work with source
    
    k = k * 2;
    std::cout << "inside function correct_replace_double_int k = " << k << "\n";
    std::cout << "pointer to k in function = " << &k << "\n";
    
    return;
} 

void const_try_to_replace_double_int(const int& k){ // -> work with source
    
    // k = k * 2;
    int l = k;
    l = l * 2;
    std::cout << "inside function correct_replace_double_int k = " << l << "\n";
    std::cout << "pointer to k in function = " << &l << "\n";
    
    return;
} 

int main(int args, char* argv[]){ // argv[0] -> Start command

    int k = 0;
    std::cin >> k;
    replace_double_int(k);
    std::cout << "in main k = " << k << "\n";
    std::cout << "pointer to k in main = " << &k << "\n";
    correct_replace_double_int(k);
    std::cout << "in main k = " << k << "\n";
    std::cout << "pointer to k in main = " << &k << "\n";

    return 0;
}