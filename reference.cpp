#include <iostream>
using namespace std;

// 值传递
void swap1(int a, int b) {
    int tmp = a;
    a = b;
    b = tmp;
}

// 地址传递
void swap2(int * a, int * b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

// 引用传递
void swap3(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}


int main() {
    int a = 10;
    int &b = a; // 数据类型 &别名 = 原名

    cout << a << endl;
    cout << b << endl;

    b = 100;
    cout << a << endl;
    cout << b << endl;

    int a1 = 10;
    int b1 = 20;
    // swap1(a1, b1);
    // cout << a1 << ", " << b1 << endl;
    
    // swap2(&a1, &b1);
    // cout << a1 << ", " << b1 << endl;
    
    swap3(a1, b1);
    cout << a1 << ", " << b1 << endl;

    return 0;
}
