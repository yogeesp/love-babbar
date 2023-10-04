// negative decimal to binary conversion

#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int n = -6; // The negative decimal number you want to convert

    // Step 1: Absolute Value
    int absN = abs(n);

    // Step 2: Convert to Binary
    std::string binary = "";
    while (absN > 0) {
        int bit = absN % 2;
        binary = std::to_string(bit) + binary;
        absN /= 2;
    }

    // Step 3: Calculate Two's Complement
    for (int i = 0; i < binary.length(); ++i) {
        binary[i] = (binary[i] == '0') ? '1' : '0';
    }

    int carry = 1;
    for (int i = binary.length() - 1; i >= 0; --i) {
        if (binary[i] == '0' && carry == 1) {
            binary[i] = '1';
            carry = 0;
        } else if (binary[i] == '1' && carry == 1) {
            binary[i] = '0';
        }
    }

    std::cout << "Binary representation of " << n << " is " << binary << std::endl;

    return 0;
}
