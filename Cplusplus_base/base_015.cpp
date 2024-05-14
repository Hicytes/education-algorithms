#include <iostream>

int my_func(int arg1, double arg2){

    int res = 2 * arg1;
    std::cout << "int and double\n"; 

    return res;
}

int my_func(int arg1, int arg2){

    int res = 2 * arg1;
    std::cout << "int and int\n"; 

    return res;
}

int main(){

    my_func(2, 2);
    my_func(2, 2.5);
    // main();

    return 0;
}

int main(int n){
    std::cout << "Another main!\n";
    return 0;
}