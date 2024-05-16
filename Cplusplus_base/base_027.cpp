#include <iostream>

struct Rectangle{
    double a;
    double b;

    double Area(){
        return a * b;
    }
};

struct Circle{
    double R;

    double Area(){
        return 3.1415926 * R * R;
    }
};

int main(){

    Rectangle rect1;
    rect1.a = 10;
    rect1.b = 20;

    Circle circ1;
    circ1.R = 10;

    std::cout << rect1.Area() << " " << circ1.Area() << "\n";

    return 0;
}