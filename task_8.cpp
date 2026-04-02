#include <iostream>
using namespace std;
int total = 0;
int accumulate(int value) {
    total += value;
    return total;
}

int main() {
    total = accumulate(10);
    cout << total << endl;
    total = accumulate(25);
    cout << total << endl;
    total = accumulate(5);
    cout << total << endl;
    return 0;
}