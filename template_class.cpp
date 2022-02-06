#include <iostream>
using namespace std;

template<class NameType, class AgeType>
class Person {
public:
    Person(NameType name, AgeType age) {
        this->m_Name = name;
        this->m_Age = age;
    }

    NameType m_Name;
    AgeType m_Age;

    void show() {
        cout << "name=" << m_Name << ", age=" << m_Age << endl;
    }
};

void test() {
    Person<string, int> p1("孙悟空", 999);
    p1.show();
}

int main() {
    test();
    return 0;
}
