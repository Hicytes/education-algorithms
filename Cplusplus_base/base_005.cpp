#include <iostream>

int main(){

    bool logic_statement;
    bool another_logic_statement;

    int a;
    std::cin >> a;

    logic_statement = a = 2; // not CE!

    if (logic_statement){
        std::cout << "True\n";
    } else {
        std::cout << "False\n";
    }

    if (logic_statement){
        //
    } else if (another_logic_statement){
        //
    } else {
        //
    }

    // if -> lazy operator:
    // if (ls1(true) and ls2(true) and ls3(true) and ... lsn(false, first in a raw. 
    // In this boint break check) and lsn+1 and lsn+2 ...)
    // if (ls1(false) or ls2(false) or ls3(false) or ... lsn(true, first in a raw. 
    // In this boint break check) or lsn+1 or lsn+2 ...)

    return 0;
}