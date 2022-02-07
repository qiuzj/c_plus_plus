#include <iostream>
using namespace std;

int main() {
    short num1 = 10;
    cout << "short: " << sizeof(short) << "," << sizeof(num1) << endl;

    int num2 = 10;
    cout << "int: " << sizeof(int) << "," << sizeof(num2) << endl;

    long num3 = 10;
    cout << "long: " << sizeof(long) << "," << sizeof(num3) << endl;

    long long num4 = 10;
    cout << "long long: " << sizeof(long long) << "," << sizeof(num4) << endl;
    return 0;
}
