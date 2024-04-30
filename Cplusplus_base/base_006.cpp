#include <iostream>

int main(){

    int x;
    const int y = 1;
    std::cin >> x;

    switch (x){
    default:
        std::cout << "Default case \n";
        // break;

    case y:
        // code if x == 1
        std::cout << "Case 1\n";
        break;

    case 2: 
        // code if x == 2
        std::cout << "Case 2 " << x << "\n";
        // break;

    case 3: 
        // code if x == 3
        std::cout << "Case 3 " << x << "\n";
        // break;

    case 4: 
        // code if x == 4
        std::cout << "Case 4\n";
        // break;
    }

    return 0;
}