#include <iostream>
#include <vector>

struct My_struct{

    short int x; // first field 
    double y; // second field
    bool z;
    short int w;

};

int main(){

    My_struct struct_1;
    // struct_1.x = 10;
    // struct_1.y = 3.1415926;
    
    My_struct struct_2;
    // struct_2.x = 5;
    // struct_2.y = 3.1415926 * 2;
    
    // std::cout << struct_1.x << " " << struct_1.y <<  "\n"; 
    // std::cout << struct_2.x << " " << struct_2.y <<  "\n"; 
    std::cout << &struct_1 << " " << &struct_2 << "\n";
    std::cout << &(struct_1.x) << " " << &(struct_1.y) << " " << &(struct_1.z) << " " << &(struct_1.w) << "\n";\

    // pointer to struct_1 == pointer to struct_1.x (4 byte)
    // pointer to struct_1.y == pointer_to struct_1.x + 8 byte (8 byte)

    void* str_1_ptr_void = reinterpret_cast<void*>(&struct_1);
    void* str_2_ptr_void = reinterpret_cast<void*>(&struct_2);
    std::cout << str_2_ptr_void << " " << str_1_ptr_void + 32 << "\n";

    return 0;
}