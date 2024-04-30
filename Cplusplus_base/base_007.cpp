#include <iostream>

int main(){

    int x = 2;
    double y = 2.9;

    if (y == x){ // compare??? cast one_type to another_type
        std::cout << "True\n";
    }

    // C-style cast worst thing, that you ever can do!
    int z = (int)y; // Bad

    int w = static_cast<int>(y); // Good
    int* ww = reinterpret_cast<int*>(&y);
    double* www = reinterpret_cast<double*>(&w);

    std::cout << z << " " << w << "\n";
    std::cout << y << " " << *ww << " " << *www << "\n";

    return 0;
}