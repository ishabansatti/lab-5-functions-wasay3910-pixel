#include <iostream>
using namespace std;
// funttion that uses static variable to retrun an incrementing ID starting from 1001
int generate_ID() {
    static int id = 1001;
    return id++;
}

// call it five times and print each ID
int main() {
    for (int i = 0; i < 5; i++) {
        cout << "ID: " << generate_ID() << endl;
    }

    return 0;
}
