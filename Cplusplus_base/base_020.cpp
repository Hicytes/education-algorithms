#include <iostream>
#include <vector>

struct My_simplest_struct{};

int main(){

    My_simplest_struct example_1_of_my_simplest_struct;
    My_simplest_struct example_2_of_my_simplest_struct;
    My_simplest_struct example_3_of_my_simplest_struct, example_4_of_my_simplest_struct;

    My_simplest_struct array_of_simplest_struct[10];
    std::vector<My_simplest_struct> vector_of_simplest_struct(5);


    return 0;
}