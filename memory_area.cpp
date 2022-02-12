#include <iostream>
using namespace std;

int g_a = 10;
static int g_s_a = 10;
const int g_c_a = 10;

int main() {
    int l_a = 10;
    static int l_s_a = 10;
    const int l_c_a = 10;

    /* 全局区 */
    cout << "---全局区---" << endl;
    cout << "全局变量g_a：" << &g_a << endl;
    cout << "全局静态变量g_s_a：" << &g_s_a << endl;
    cout << "局部静态变量l_s_a：" << &l_s_a << endl;

    cout << "\n字符串常量：" << &"hello world" << endl;
    cout << "全局常量g_c_a：" << &g_c_a << endl;

    /* 不在全局区 */
    cout << "---不在全局区---" << endl;
    cout << "\n局部变量l_a：" << &l_a << endl;
    cout << "局部常量l_c_a：" << &l_c_a << endl;

    return 0;
}
