#include "MyString.h"
#include <cctype>

MyString operator-(MyString &s)
{
    std::string str = s.cname;
    for(auto &c: str){
        c = std::tolower(c);
    }

    std::cout << '\n' << str << '\n';
    std::strcpy(s.cname, str.c_str());
    return s; 

}

 MyString operator* (int c, MyString &d) {
    char *temp = new char[500];
    temp[0] = '\0';
    for (int i = 0; i < c; i++){
        std::strcat(temp, d.cname);
    }
    std::string s = temp;
    std::cout << std::endl << s << std::endl;

    return temp; 
}

MyString operator*=(int x, MyString& y) {

    if (x <= 0) {
        
        delete[] y.cname;
        y.cname = new char[1];
        y.cname[0] = '\0';  
        return y;
    }

    MyString s = x * y;
    delete [] y.cname;
    y.cname = new char [300];
    y.cname[0] = '\0';
    std::strcat(y.cname, s.cname);
    y.display();

    return y;
}

MyString& operator++(MyString &y)
{
   
    std::string str = y.get_str();
    for(auto c : str){
        std::toupper(c);
    }
    y.set_str(str.c_str());

    y.display();

    return y;
}

MyString& operator++(MyString &y, int)
{
    std::cout << "No clue what this is supposed to do";
    return y; 
}
