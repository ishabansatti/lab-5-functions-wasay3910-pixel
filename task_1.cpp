#include <iostream>

int squar(int n){
    
    return n * n;
}
int main() {
    
    int a = 5;
    int square = squar(a);
    std::cout << "The square of " << a << " is " << square << std::endl;
    return 0;
}
