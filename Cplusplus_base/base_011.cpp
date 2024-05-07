#include <iostream>

int main(){
    
    int a = 10; // object, which placed in some place in our RAM
    int c = 20;
    int e = 30;
    int* a_ptr = &a; // pointer, which contain info aboute placement of object
    int* c_ptr = &c;
    int* e_ptr = &e;

    std::cout << "a_ptr = " << a_ptr << " c_ptr = " << c_ptr << " e_ptr = " << e_ptr << "\n";

    int* b_ptr = new int;
    int* d_ptr = new int;
    int* f_ptr = new int;

    double* cc = reinterpret_cast<double*>(c_ptr); // UB!

    std::cout << "a_ptr = " << a_ptr << " c_ptr = " << c_ptr << " e_ptr = " << e_ptr << " cc_ptr = " << cc << "\n";

    std::cout << "b_ptr = " << b_ptr << " d_ptr = " << d_ptr << " f_ptr = " << f_ptr << "\n";

    std::cout << a_ptr - c_ptr << " " << a_ptr - e_ptr << "\n";
    std::cout << b_ptr - d_ptr << " " << b_ptr - f_ptr << "\n";

    int** a_ptr_ptr = &a_ptr;
    int** c_ptr_ptr = &c_ptr;

    std::cout << c_ptr_ptr - a_ptr_ptr << "\n";
    std::cout << c_ptr_ptr << " " << a_ptr_ptr << "\n";
    
    std::cout << "a_ptr_ptr = " << a_ptr_ptr << "\n";

    delete b_ptr;
    delete d_ptr;
    delete f_ptr;

    return 0;
}