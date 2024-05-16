#include <iostream>
#include <vector>

struct My_struct{

    short int x; // first field 
    double y; // second field
    bool z; 
    long int w;

};

struct Another_struct{
    int xx;
    My_struct s; 
};


int main(){

    Another_struct struct_1;
    Another_struct struct_2;

    struct_2.xx = 4;
    My_struct ex;
    ex.x = 43;
    struct_2.s = ex;

    Another_struct struct_3;

    std::cout << &struct_1 << " " << &struct_2 << " " << &struct_3 << "\n";
    std::cout << &(struct_2.xx) << " " << &(struct_2.s) << " " << &(struct_2.s.x) << " " << &(struct_2.s.y) << " " << &(struct_2.s.z) << " " << &(struct_2.s.w) << "\n";
    std::cout << struct_2.xx << " " << struct_2.s.x << "\n";
    std::cout << &(ex) << " " << &(ex.x) << " " << &(ex.y) << " " << &(ex.z) << " " << &(ex.w) << "\n";
    return 0;
}