#include <iostream>
#include "base_023.cpp"

int main(){

    // My_struct struct_1;
    // struct_1.x = 1;
    // struct_1.y = 3.14;
    // struct_1.z = true;
    // struct_1.w = 10e17;

    // struct_1.Print();
    // struct_1.One_More_Print();

    std::cout << My_struct::result << " " << My_struct::Sum2n(10, 20) << "\n";

    return 0;
}