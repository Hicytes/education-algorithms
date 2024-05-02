#include <iostream>
#include <vector>

int main(){

    // 2 types dynamic memory: classic way and conteiners
    int N = 0;
    // std::cin >> N;
    int array[N]; // very bad!

    // classic way -> new and delete
    int* i = new int;
    // code
    delete i; // clear handeled memory!!!
    // new and delete -- for single object

    int* array_i = new int[N];
    // code
    delete[] array_i;

    // conteiners, for example -- std::vector<type>
    std::vector<int> int_vector;
    std::cout << "size of vector after init = " << int_vector.size() << " ";
    std::cout << "capacity of vector after init = " << int_vector.capacity() << "\n";

    // int_vector.resize(2);
    // std::cout << "size of vector after resize to 2 = " << int_vector.size() << "\n";
    // std::cout << "capacity of vector after resize to 2 = " << int_vector.capacity() << "\n";
    
    int_vector.push_back(1);
    std::cout << "size of vector after 1 push_back = " << int_vector.size() << "\n";
    std::cout << "capacity of vector after 1 push_back = " << int_vector.capacity() << "\n";

    int_vector.push_back(1);
    std::cout << "size of vector after 2 push_back = " << int_vector.size() << "\n";
    std::cout << "capacity of vector after 2 push_back = " << int_vector.capacity() << "\n";

    int_vector.push_back(1);
    std::cout << "size of vector after 3 push_back = " << int_vector.size() << "\n";
    std::cout << "capacity of vector after 3 push_back = " << int_vector.capacity() << "\n";

    int_vector.push_back(1);
    std::cout << "size of vector after 4 push_back = " << int_vector.size() << "\n";
    std::cout << "capacity of vector after 4 push_back = " << int_vector.capacity() << "\n";
    
    int_vector.push_back(1);
    std::cout << "size of vector after 5 push_back = " << int_vector.size() << "\n";
    std::cout << "capacity of vector after 5 push_back = " << int_vector.capacity() << "\n";

    int_vector.shrink_to_fit();
    std::cout << "size of vector after shrink_to_fit = " << int_vector.size() << "\n";
    std::cout << "capacity of vector after 5 shrink_to_fit = " << int_vector.capacity() << "\n";

    return 0;
}