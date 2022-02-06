#include <iostream>
using namespace std;

// 声明创建模板，指定T为一种数据类型
// template<typename T>
template<class T> // class和typename等价
void swapData(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template<class T>
void func() {
    cout << "func ok" << endl;
}

void test() {
    int a = 10;
    int b = 20;
    // 自动类型推导
    swapData(a, b);
    cout << "a=" << a << ", b=" << b << endl;

    // 显示指定类型
    swapData<int>(a, b);
    cout << "a=" << a << ", b=" << b << endl;
}

int main() {
    test();
    func<int>();
    return 0;
}
