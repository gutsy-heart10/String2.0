#include<iostream>
#include"String.h"
using namespace std;

int String::count = 0;
int String::getCount() {
    return count;
}


void String::inputString() {
    cout << "Enter a string: ";
    cin.getline(str, length + 1);
}


void String::displayString() {
    cout << "String: " << str << endl;
}

int main() {
    // konstruktor po umolcaniyu
    String defaultString("Salam");
    defaultString.displayString();

    // konstruktor proizvolnoqo razmera
    String customSizeString(50);
    customSizeString.inputString();
    customSizeString.displayString();

    // konstructor inicizlizirovanniy polzovatelem
    cout << "Enter a string to initialize: ";
    char* userInput = new char[100];
    cin.getline(userInput, 100);

    String userInputString(userInput);
    userInputString.displayString();

    delete[] userInput;

    cout << "Number of created String objects: " << String::getCount() << endl;
    return 0;
}
