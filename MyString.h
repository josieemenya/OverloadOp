#ifndef MYSHEADER_H_
#define MYSHEADER_H_

#include <vector>
#include <string>
#include <cstring>
#include <iostream>

class MyString{

public:
MyString();
MyString(const char *s);
MyString(const MyString &s); //copy 
MyString(MyString &&y); //move

~MyString();

void display() const;

int get_length() const; 

const char* get_str() const; 

MyString operator=(MyString &s) const{return *this = s; }
MyString operator-();
bool operator==(const MyString& c) const{return std::strcmp(cname, c.cname) == 0;};
bool operator!=(const MyString& d) const {return !(*this == d); }
bool operator<(const MyString &a) const{return cname < a.cname; }
bool operator>(const MyString &c) const{return !(*this < c); }
MyString operator+(const MyString &c) const{MyString temp = strcat(cname, c.cname); return temp;}
MyString operator+=(const MyString &c) const{ MyString s = *this + c; s.display(); return s;}
MyString operator*(int x) const;
MyString operator*=(int x);

friend std::ostream& operator<<(std::ostream& os, const MyString& s){os << s.cname; return os;}

MyString &operator++();
MyString &operator++(int);



private:
char* cname;

//int stringLength();



};

#endif