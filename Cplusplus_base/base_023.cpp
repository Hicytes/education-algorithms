#include <iostream>
#include <vector>

struct My_struct{

    short int x; // first field 
    double y; // second field
    bool z; 
    long int w;

    static const int result = 10;

    static int Sum2n(int x1, int x2){
        return x1 + x2;
    }

    void Print(){
        std::cout << x << " " << y << " " << z << " " << w << "\n";
    }

    void One_More_Print();

};

void My_struct::One_More_Print(){
    std::cout << x << " " << y << " " << z << " " << w << " Printed by One_More_Print!\n";
}

// int main(){

//     // My_struct struct_1;
//     // struct_1.x = 1;
//     // struct_1.y = 3.14;
//     // struct_1.z = true;
//     // struct_1.w = 10e17;

//     // struct_1.Print();
//     // struct_1.One_More_Print();

//     std::cout << My_struct::result << " " << My_struct::Sum2n(10, 20) << "\n";

//     return 0;
// }