#include <iostream>
#include <fstream>

int main(int argc, char* argv[]){
    std::cout << "How old are you?" << std::endl;
    int age;
    std::cin >> age;
    std::cout << "You are " << age << " years old." << std::endl;
    std::ofstream age_file("your_age.txt");
    age_file << age << std::endl;
    }
