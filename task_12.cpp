#include <iostream>
using namespace std;

void printType(int num) {
    cout << "Integer: " << num << endl;
}

void printType(double num) {
    cout << "Double: " << num << endl;
}

void printType(char ch) {
    cout << "Character: " << ch << endl;
}

int main() {
    printType(5);
    printType(3.14);
    printType('A');
    return 0;
}