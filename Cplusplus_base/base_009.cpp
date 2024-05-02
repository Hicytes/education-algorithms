#include <iostream>

int main(){

    int static_array[10]; // reserve 10 * 4 byte in memory. Static memory!

    // int length_of_static_array = 10;
    // int another_static_array[length_of_static_array]; 
    // length_of_static_array = 1000; // UB

    const int length_of_static_array = 10;
    // int another_static_array[length_of_static_array]; // not UB
    int another_static_array[length_of_static_array] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // Good
    // int another_static_array[length_of_static_array] = {0, 1, 2, 3, 4, 5, 6, 7, 8}; // Good
    // int another_static_array[length_of_static_array] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // CE


    for (int i = 0; i < length_of_static_array; i++){
        std::cout << another_static_array[i] << " ";
    }
    std::cout << "\n";

    double double_static_array[length_of_static_array];
    char char_static_array[length_of_static_array];

    const int size_for_first_dim = 10;
    const int size_for_second_dim = 10;
    int td_static_array[size_for_first_dim][size_for_second_dim];

    for (int i = 0; i < size_for_first_dim; i++){
        for (int j = 0; j < size_for_second_dim; j++){
            td_static_array[i][j] = (i + 1) * (j + 1);
        }
    }

    // types of error:
    // CE -- compilation error. (often problems with syntax)
    // RE -- run error. Example:
    // for (short int j = 0; j < 10; j++){
    //     for (int i = 0; i < 10; j++){
    //         std::cout << "j = " << j << " i = " << i << "\n";
    //     }
    // }
    // UB -- undefined behavior.


    return 0;
}