#include "MyString.h"
#include <iostream>

int main(){
    MyString Bob; //empty constructor
    MyString Joe("Bollocks"); // const char constructor
    MyString Steven(Joe); // cpy
    MyString Michael("Happy");

    Joe.display();
    Steven.display();
    //int xc = y.get_length();
    std::cout << Steven << std::endl;
    std::cout << (Joe == Steven) << std::endl;

    MyString Temp (Joe + Steven);
    Temp.display();
    //MyString v (y * 3);
    //Temp.display();

    if(Temp == Joe)
        std::cout << true; // 1
    else 
        std::cout << false; // 0

    MyString Rufus("NINE");
    4 * Rufus;

    Rufus.display();

    MyString Tomas ("Mamma Mia");
    5 *= Tomas;
    std::cout << Tomas << std::endl;

    if (Temp < Rufus)
        std::cout << true << '\n';
    else 
        std::cout << false << '\n';

    MyString Hudson("Billionair");
    Hudson += Rufus; 

    Hudson++;
    ++Hudson;

    Temp.display();
    MyString Vincent(-Hudson);
    //std::cout << Temp << std::endl;


    system("pause");

}