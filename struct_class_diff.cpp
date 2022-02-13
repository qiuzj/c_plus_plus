#include <iostream>
using namespace std;

class C1 {
    int m_A; // 私有
};

struct C2 {
    int m_A; // 公有

    int func() {
        return m_A;
    }
};

struct C3 : public C2 {
    int m_B = 2;
    int func2() {
        return m_A + m_B;
    }
};

int main() {
    C1 c1;
    // c1.m_A = 1; 私有访问不了

    C2 c2;
    c2.m_A = 1;
    cout << c2.func() << endl;

    C3 c3;
    c3.m_A = 1;
    cout << c3.func2() << endl;

    return 0;
}
