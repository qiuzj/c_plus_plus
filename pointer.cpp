#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int * p;
    p = &a;
    cout << "a的地址：" << &a << ", a的值：" << a << endl;
    cout << "p：" << p << ", *p: " << *p << endl;

    *p = 1000;
    cout << "\na的地址：" << &a << ", a的值：" << a << endl;
    cout << "p：" << p << ", *p: " << *p << endl;

    cout << sizeof(p) << endl;
    cout << sizeof(int *) << endl;
    cout << sizeof(char *) << endl;
    cout << sizeof(float *) << endl;
    cout << sizeof(double *) << endl;
    cout << sizeof(string *) << endl;
    cout << sizeof(*p) << endl;

    // 空指针
    int * p1 = NULL;
    // *p1 = 100; // error

    // 野指针
    int * p2 = (int *)0x1100;
    // cout << *p2 << endl;

    return 0;
}
