#include <iostream>
using namespace std;

auto sum_and_product = [](int x, int y) { return make_pair(x + y, x * y); };
int main() {
    auto result = sum_and_product(3, 4);
    cout << "Sum: " << result.first << ", Product: " << result.second << endl;
    return 0;
}
