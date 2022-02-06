#include <iostream>
using namespace std;

class Base {
public:
    int m_A = 100;
    static int m_A2;
protected:
    int m_B;
private:
    int m_C;
};
int Base::m_A2 = 101;

// 继承
class Son : public Base {
public:
    int m_D;
};

class Son2 : public Base {
public:
    int m_A = 200;
};

int main() {
    // 16
    cout << "size of Son: " << sizeof(Son) << endl;

    Son2 s2;
    cout << "Son A: " << s2.m_A << endl;
    cout << "Base A: " << s2.Base::m_A << endl;
    cout << "Base::m_A2: " << Base::m_A2 << endl;
    cout << "s2.m_A2: " << s2.m_A2 << endl;
    cout << "s2.Base::m_A2: " << s2.Base::m_A2 << endl;
    // 通过类的方式，访问Base作用于的m_A2
    cout << "Son2::Base::m_A2: " << Son2::Base::m_A2 << endl;
    cout << "Son2::m_A2: " << Son2::m_A2 << endl;

    return 0;
}
