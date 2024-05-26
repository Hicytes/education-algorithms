#include <iostream>
#include <string>
#include <vector>

class People{

public:
    
    unsigned short Age;
    std::string name;
    std::string soname;

    People(){
        // std::cout << "People satndart constructor is called!\n";
    };
    
    People(unsigned short x){
        Age = x;
    }

    People(std::string n){
        name = n;
    }

    People(std::string n, std::string s){
        name = n;
        soname = s;
    }

    People(std::string n, std::string s, unsigned short a){
        Age = a;
        name = n;
        soname = s;
    }

    void Greeting(){
        std::cout << "Hello, my name is " << name << " " << soname << ". I'm " << Age << " old.\n";
    }

    ~People(){
        // std::cout << "People " << name << " " << soname << " was killed!\n";
    }

protected:
    bool check(){
        return true;
    }

};

class Director{

public:
    std::string Department;

    void Fire(std::string n){
        std::cout << n << " was fired!\n";
    }
};

class Worker : public People, public Director {
    
public:
    std::string Company;

    Worker(){
        // std::cout << "Worker standart constructor is called!\n";
    }

    Worker(std::string n, std::string s, unsigned int a, std::string c){
        name = n;
        soname = s;
        Age = a;
        Company = c;
    }

    void Greeting(){
        std::cout << "Hello, my name is " << name << " " << soname << ". I'm 20 old. I'm work in " << Company << ".\n";
    }

    ~Worker(){
        // std::cout << "Worker " << name << " " << soname << " was killed!\n";
    }

private:
    int salary;

protected:

    bool Check_salary(uint s){
        if (salary < s and check()){
            return false;
        } else {return true;}
    }

};

int main(){

    People Ivan("Ivan", "Ivanov", 18);
    Ivan.Greeting();
    // Worker Ivan = static_cast<Worker>(Ivan); // need User Defined cast operator

    Worker Petr("Petr", "Petrov", 20, "Yandex");
    Petr.Greeting();

    Worker Sasha("Sasha", "Aleksandrov", 67, "Yandex");
    Petr.Fire(Sasha.name);
    

    return 0;
}