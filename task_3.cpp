#include <iostream>
using namespace std;

int multiply(const int& a, const int& b) {
    return a * b;
}

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << multiply(a, b) << endl;
    return 0;
}
