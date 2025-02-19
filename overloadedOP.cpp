#include "MyString.h"
#include <cctype>

MyString MyString::operator-()
{
    std::string str = cname;
    for(auto &c: str){
        c = std::tolower(c);
    }

    std::cout << '\n' << str << '\n';
    std::strcpy(cname, str.c_str());
    return *this; 

}

MyString MyString::operator* (int c) const{
    char *temp = new char[500];
    temp[0] = '\0';
    for (int i = 0; i < c; i++){
        std::strcat(temp, cname);
    }
    std::string s = temp;
    std::cout << std::endl << s << std::endl;

    return temp; 
}

MyString MyString::operator*=(int x) {

    if (x <= 0) {
        
        delete[] cname;
        cname = new char[1];
        cname[0] = '\0';  
        return *this;
    }

    MyString s = *this * x;
    delete [] cname;
    cname = new char [300];
    cname[0] = '\0';
    std::strcat(cname, s.cname);
    display();

    return *this;
}

MyString &MyString::operator++()
{
   
    std::string str = cname;
    for(auto c : str){
        std::toupper(c);
    }
    std::strcpy(cname, str.c_str());

    this->display();

    return *this;
}

MyString &MyString::operator++(int)
{
    std::cout << "No clue what this is supposed to do";
    return *this; 
}
