#include <iostream>

int main(){
    
    // standart representation if number:
    // x = a_x * 10^(b_x), a_x and b_x -> numbers

    // float point number in comput is not accurate!
    double a = 3.;
    double b = 7.;
    double c = a/b;
    std::cout << "a = " << a << "\nb = " << b << "\nc = " << c << "\nb * c = " << b * c << "\n" << 3 * a - 3 * 7. * c << "\n";
    std::cout << 1./33. * 693. << "\n";

    bool f = true;
    bool g = false;
    bool h = 1; // true
    bool j = b; // b != 1 -> false




    return 0;
}