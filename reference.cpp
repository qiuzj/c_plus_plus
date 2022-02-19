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

// 不要返回局部变量的引用
// int & retRef() {
//     int a = 10;
//     return a; // warning: reference to stack memory associated with local variable 'a' returned
// }

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

    // int &ref = retRef();
    // cout << ref << endl;

    int a = 10;
    // int & ref = 10; // 非常量引用的初始值必须为左值
    const int & ref = 10; // 加上const之后，编译器将代码修改为：int temp = 10; const int & ref = temp;
    // ref = 20; // 表达式必须是可修改的左值

    return 0;
}
