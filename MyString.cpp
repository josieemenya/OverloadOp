#include "MyString.h"
#include <string>


MyString::MyString() : cname (nullptr){
    cname =new char [1];
    *cname = '\0';
}

MyString::MyString(const char* s): cname (nullptr) {

    if(s == nullptr){
        cname = new char[1];
        *cname = '\0';
    } else {
        cname = new char[strlen(s) + 1];
        strcpy(cname, s);
    }

}

MyString::MyString(const MyString &f) : cname(nullptr) {

cname = new char[strlen(f.cname + 1)]; // cname = char length of f.name + 1 to include /0
strcpy(cname, f.cname); // cpy
//return *this; //return value

}



MyString::MyString(MyString &&f) : cname(f.cname) {
  
    f.cname = nullptr;
    //return *this;
}

MyString::~MyString(){
    delete [] cname;
}

void MyString::display() const {
    std::string s = cname;
    std::cout << s << std::endl;
}

int MyString::get_length() const{
    return strlen(cname);
}