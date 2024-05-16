#include <iostream>

struct My_struct{

    int public_a;
    int Get_private_a(){
        if (Check_data()){
            return private_a;
        } else {return -1;}
    }

private:

    int private_a = 11;
    bool Check_data(){
        if (private_a == 10){
            return true;
        } else {return false;}
    }

};

int main(){

    My_struct struct1;
    // struct1.private_a = 10; // CE!
    std::cout << struct1.Get_private_a() << "\n";


    return 0;
}