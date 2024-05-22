#include <iostream>
#include <vector>

class My_struct{

public:
    int a = 1;
    double b = 2.5;
    std::vector<double> c;
    double* array_pointer;

    void Hello_from_struct(){
        
        std::cout << "Hello, world!\n"; 

        return;
    }

    void Allocate_dym_memory(int w){
        array_pointer = new double[w];
    }

    My_struct(){
        Hello_from_struct();
    }; // Standart empty constructor

    My_struct(int x){
        a = x;
        b = 3.14;
        c = {1, 2, 3};
    }

    My_struct(double y){
        a = 2;
        b = y;
        c = {1, 2, 3};
    }

    My_struct(int x, double y){
        a = x;
        b = y;
        c = {1, 2, 3};
    }

    ~My_struct(){
        delete[] array_pointer;
    }

};

int main(){

    My_struct struct1;
    My_struct struct2 = My_struct();
    My_struct* struct3 = new My_struct();
    My_struct struct4 = My_struct(20);
    My_struct struct5 = My_struct(9.81);
    My_struct struct6 = My_struct(10, 2.71828);
    My_struct struct7 = My_struct(struct2);

    std::cout << struct1.a << " " << struct2.a << " " << struct3->a << " " << struct4.a << "\n";
    std::cout << struct1.b << " " << struct2.b << " " << struct3->b << " " << struct5.b << "\n";
    
    
    delete struct3;

    return 0;
}