#include <iostream>
using namespace std;

int main() {
    int a = 9;
    double b = 9;
    cout << a << "," << b << endl;

    double a1 = 9.99;
    int b1 = a1;
    cout << a1 << "," << b1 << endl;

    a = (int) a1;
    cout << "a: " << a << endl;
    a = int(a1);
    cout << "a: " << a << endl;

    int c = 1;
    // int d = c++;
    int d = ++c;
    cout << "d: " << d << endl;

    return 0;
}
