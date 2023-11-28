#include<iostream>
#include<string.h>
using namespace std;




class String {
private:
    char* str;
    int length;
    static int count;

public:

    String() : String(80) {}


    String(int size) : str(new char[size + 1]), length(size) {
        count++;
    }

    String(const char* inputStr) : str(new char[strlen(inputStr) + 1]), length(strlen(inputStr)) {
        strcpy_s(str, strlen(inputStr) + 1, inputStr);
        count++;
    }


    ~String() {
        delete[] str;
        count--;
    }


    static int getCount();


    void inputString();


    void displayString();
};

