#include<iostream>

using namespace std;

int main() {
    int base, exponent;
    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;

    int result = 1;

    // Loop to calculate power
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }

    cout << base << " raised to the power of " << exponent << " is: " << result << endl;

    return 0;
}

