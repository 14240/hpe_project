#include <iostream>
using namespace std;

int main() {
    // TODO: Add the required feature here
    Calculator calc;
    int x = 4, y = 5;

    cout << "Sum: " << calc.add(x, y) << endl;
    cout << "Square of " << x << ": " << calc.square(x) << endl;

    return 0;
}
