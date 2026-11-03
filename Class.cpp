// .h file
#ifndef String_H
#define String_H
#include<iostream>
using namespace std;
class String {
    char * str{};
    int Length{};
    char * dynamicCopy(char *,const char *);
    public:
    String();
    String(const char *);
    String(const String &);
    int getLength(const char *) const;
    char * getString() const;
    void setString(const char *);
    void setLength(int) ;
    char & operator[](int);
    String& operator+=(const String &);
    bool operator==(const String &) const;
    String& operator=(const String &);
    ~String();
};
String operator+(const String &, const String &);
ostream& operator<<(ostream& os,String const &);
istream& operator>>(istream& is,String &);
#endif

// implementation file
#include <iostream>
#include "String.h"

String::String() {
    str = new char[1];
    str[0] = '\0';
    Length = 0;
}

String::String(const char * s) {
    str = dynamicCopy(nullptr, s);
    Length = getLength(s);
}

String::String(const String & other) {
    str = dynamicCopy(nullptr, other.str);
    Length = other.Length;
}

char * String::dynamicCopy(char * old, const char * src) {
    int n = getLength(src);
    char * tmp = new char[n + 1];
    for (int i = 0; i < n; i++)
        tmp[i] = src[i];
    tmp[n] = '\0';
    delete[] old;
    return tmp;
}

int String::getLength(const char * s) const {
    if (s == nullptr)
        return 0;
    int n = 0;
    while (s[n] != '\0')
        n++;
    return n;
}

char * String::getString() const {
    return str;
}

void String::setString(const char * s) {
    str = dynamicCopy(str, s);
    Length = getLength(s);
}

void String::setLength(int n) {
    if (n < 0 || n > Length)
        return;
    str[n] = '\0';
    Length = n;
}

char & String::operator[](int i) {
    return str[i];
}

String & String::operator+=(const String & other) {
    int n = Length + other.Length;
    char * tmp = new char[n + 1];
    for (int i = 0; i < Length; i++)
        tmp[i] = str[i];
    for (int j = 0; j < other.Length; j++)
        tmp[Length + j] = other.str[j];
    tmp[n] = '\0';
    delete[] str;
    str = tmp;
    Length = n;
    return *this;
}

bool String::operator==(const String & other) const {
    if (Length != other.Length)
        return false;
    for (int i = 0; i < Length; i++)
        if (str[i] != other.str[i])
            return false;
    return true;
}

String & String::operator=(const String & other) {
    if (this != &other) {
        str = dynamicCopy(str, other.str);
        Length = other.Length;
    }
    return *this;
}

String::~String() {
    delete[] str;
}

String operator+(const String & a, const String & b) {
    String r(a);
    r += b;
    return r;
}

ostream & operator<<(ostream & os, String const & s) {
    os << s.getString();
    return os;
}

istream & operator>>(istream & is, String & s) {
    char tmp[1000];
    is >> tmp;
    s.setString(tmp);
    return is;
}

//main file
#include <iostream>
#include"String.h"
using namespace std;
int main() {
    String s1 = "Hello";
    String s2 = "World";
    String s3;

    cout << s1 << " " << s2 << "\n";

    s3 = s1 + s2;
    cout << s3 << "\n";

    s1 += s2;
    cout << s1 << "\n";

    String s4(s1);
}
