#include <iostream>
using namespace std;

int * func() {
    // int * p = new int(10);
    // or
    int * p = new int;
    *p = 2;

    return p;
}

void func2() {
    int * p = new int(10);
    cout << *p << endl;
    cout << *p << endl;
    delete p; // 释放堆区数据
    cout << *p << endl;
}

void func3() {
    int * arr = new int[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = i;
    }
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << endl;
    }

    // 释放数组，在delete之后添加[]
    delete [] arr;
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << endl;
    }
}

int main() {
    // int * p = func();
    // cout << *p << endl;
    // cout << *p << endl;

    // func2();

    func3();

    return 0;
}
