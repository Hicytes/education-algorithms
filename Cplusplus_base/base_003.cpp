#include <iostream>

int main(){
    
    // python: 
    // a = 5 -> integer
    // a = 5*3.3 -> float
    // a = 'python' -> string

    // c++:
    // int a = 5 -> integer
    // float a = 5 * 3.3 -> float
    // std::string a = 'python'-> string

    // Types in cpp:
    int a = -2147483647; // integer -> 4 byte (32 bit) : [ −2 147 483 648, 2 147 483 647] 
    int b = 2147483646;

    std::cout << "a = " << a << "\na - 1 = " << a - 1 << "\na - 2 = " << a - 2 << "\n";
    std::cout << "b = " << b << "\nb + 1 = " << b + 1 << "\nb + 2 = " << b + 2 << "\n";

    std::cout << "Such behavior named overflow!\n";

    // short/long and signed unsigned:
    short int c = 0; // short int = short 2 byte (16 bit) : [–32768; 32767]
    // |0|1|1|1|1|1|1|1|1|1|1|1|1|1|1|1| 2^0 + 2^1 + 2^2 + 2^3 + ... + 2^k = 2^(k - 1)
    // |0|0|0|0|1|0|1| = 1 * 2^0 + 0 ^ 2^1 + 1 * 2^2 + 0 * 2^3 + ... = 5
    // |0|0|0|0|1|1|0| = 0 * 2^0 + 1 ^ 2^1 + 1 * 2^2 + 0 * 2^3 + ... = 6
    // |0|0|0|0|1|1|1| = 1 * 2^0 + 1 ^ 2^1 + 1 * 2^2 + 0 * 2^3 + ... = 7
    // |0|0|0|1|0|0|0| = 0 * 2^0 + 0 ^ 2^1 + 0 * 2^2 + 1 * 2^3 + ... = 8
    // |0|0|0|1|0|0|1| = 1 * 2^0 + 0 ^ 2^1 + 0 * 2^2 + 1 * 2^3 + ... = 9

    long int d = 0; // 8 byte (64 bit) : [−9 223 372 036 854 775 808; 9 223 372 036 854 775 807]

    long long int e = 0;

    unsigned int f = 0; // 4 byte (32bit) : [0; 2 147 483 648 * 2 - 1]
    unsigned long int g = 0; 
    unsigned long long int h = 0;
    unsigned short int j = 0;

    char s = 'a';
    std::cout << int(s) << " " << char(int(s) + 1) << "\n";

    return 0;
}