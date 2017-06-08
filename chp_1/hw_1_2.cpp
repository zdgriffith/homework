#include <iostream>
#include <string>

int main(){
    //pointer to a character
    char* a= new char;

    //array of 10 integers
    int b[10];
    for (int i= 0; i < 10; ++i)
        b[i]= i;

    //pointer to an array of 10 integers
    int* c= new int[10];

    //pointer to an array of character strings
    std::string* d= new std::string[10];

    //pointer to pointer to a character
    char** e = new char*;
    
    //integer constant
    const int f = 10;

    //pointer to an integer constant
    const int* g = new int;

    //constant pointer to an integer constant
    const int* const h = new int;

    delete a;
    delete[] c;
    delete[] d;
    delete e;
    delete g;
    delete h;
}
