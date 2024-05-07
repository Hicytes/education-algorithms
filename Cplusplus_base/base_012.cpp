#include <iostream>
#include <vector>

int main(){
    
    int a = 10; 
    int b = 20;
    int c = 30;

    std::cout << "a = " << a << " b = " << b << " c = " << c << "\n";

    *(&a - 1) = 15; // UB!
    *(&a + 1) = 15;
    *(&a + 2) = 25;

    std::cout << "a = " << a << " b = " << b << " c = " << c << "\n";

    int* array = new int[10];
    int* empty_ptr, another_empty_ptr;
    std::cout << typeid(empty_ptr).name() << " " << typeid(another_empty_ptr).name() << "\n";

    for(int i = 0; i < 10; i++){
        array[i] = i * i;
    }

    std::cout << *(array + 7) << " " << array[7] << "\n";

    // int* dd_array = new int[3][4]; // CE
    int classic_static_dd_array[3][4]; // OK! allocate 12 int = 48 byte
    int* dynamic_dd_array = new int[3 * 4]; // OK!
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            classic_static_dd_array[i][j] = 10 * i + j;
            *(dynamic_dd_array + i * 4 + j) = 10 * i + j;
        }
    }

    int* classic_static_dd_array_ptr = &classic_static_dd_array[0][0]; // OK!
    for (int i = 0; i < 12; i++){
        std::cout << *(classic_static_dd_array_ptr + i) << " ";
    }
    std::cout << "\n";

    for (int i = 0; i < 12; i++){
        std::cout << *(dynamic_dd_array + i) << " ";
    }
    std::cout << "\n";

    std::vector<double> vector(10);
    std::vector<double> another_vector(10);
    std::cout << &vector << " " << &another_vector << " " << (&(vector)) - (&(another_vector)) << "\n";
    std::cout << &(vector[0]) << " " << &(vector[1]) << " " << &(vector[2]) << "\n";

    std::vector<double>* d_ptr_1 = new std::vector<double>;
    std::vector<double>* d_ptr_2 = new std::vector<double>;
    std::cout << d_ptr_2 - d_ptr_1 << "\n";

    // vector = (pointer to dynamic array, size, capacity)

    delete d_ptr_1;
    delete d_ptr_2;

    int* a_ptr = &b;
    int* b_ptr = &c;
    int* c_ptr = &a;

    std::cout << *a_ptr << " " << *b_ptr << " " << *c_ptr << "\n";

    delete[] array;
    delete[] dynamic_dd_array;

    int& a_link = a;

    std::cout << "a_link = " << a_link << " a = " << a << "\n";
    a = 5;
    std::cout << "a_link = " << a_link << " a = " << a << "\n";
    a_link = 4;
    std::cout << "a_link = " << a_link << " a = " << a << "\n";

    std::cout << &a_link << " " << &a << "\n";

    return 0;
}