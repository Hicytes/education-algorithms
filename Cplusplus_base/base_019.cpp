#include <iostream>

void array_func(int* k){

    *(k + 1) *= 2;

    return;
}

int main(int args, char* argv[]){ 

    int* arr = new int[10];

    arr[1] = 2;
    std::cout << arr[1] << " \n";
    array_func(arr);
    std::cout << arr[1] << " \n";

    delete arr;

    return 0;
}