#include <iostream>

int main(){

    bool condition = true;
    int a = 0;

    while (condition){
        a++; // a -> a + 1 equiv a = a + 1;
        // a--; // a -> a - 1 equiv a = a - 1;
        std::cout << "a = " << a << "\n";
        if (a == 10){
            condition = false;
        }
    }

    std::cout << "Final a = " << a << "\n";

    //for (start, stop, change iteraator){}
    for (int i = 0; i < 11; ++i){
        std::cout << "i = " << i << "\n";
    }

    // break and continue

    for (int i = 0; i < 11; ++i){
        if (i > 9){
            break;
        }
        if (i == 4){
            continue;
        }
        std::cout << "i = " << i << "\n";
    }

    int b = 0;
    while (true){
        std::cin >> b;
        if (b == 1){
            break;
        }
    }

    return 0;
}