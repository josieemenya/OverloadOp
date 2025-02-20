#ifndef MYSHEADER_H_
#define MYSHEADER_H_

#include <vector>
#include <string>
#include <cstring>
#include <iostream>

class MyString{

private:
char* cname;

public:
MyString();
MyString(const char *s);
MyString(const MyString &s); //copy 
MyString(MyString &&y); //move

~MyString();

void display() const;

int get_length() const; 

const char* get_str() const {return cname;};

public:
void set_str(const char* c);

MyString operator=(MyString &s) const{return *this = s; }
friend MyString operator-(MyString &s);
friend bool operator==(const MyString& c, const MyString& f) {return std::strcmp(c.cname, f.cname) == 0;};
friend bool operator!=(const MyString& d, const MyString &y) {return !(d == y); }
friend bool operator<(const MyString &a, const MyString &b) {return a.cname < b.cname; }
friend bool operator>(const MyString &c, const MyString &d) {return !(c < d); }
friend MyString operator+(const MyString &c, const MyString &d) {MyString temp = strcat(c.cname, d.cname); return temp;}
friend MyString operator+=(const MyString &c, const MyString &d) { MyString s = c + d; s.display(); return s;}
friend MyString operator*(int x, MyString& s);
friend MyString operator*=(int x, MyString &s);

friend std::ostream& operator<<(std::ostream& os, const MyString& s){os << s.cname; return os;}

friend MyString &operator++(MyString);
friend MyString &operator++(MyString &s, int x);





//int stringLength();



};

#endif