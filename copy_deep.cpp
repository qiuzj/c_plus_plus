#include <iostream>
using namespace std;

class Person {
public:
    Person() {
        cout << "默认构造函数" << endl;
    }

    Person(int age, int height) {
        m_age = age;
        m_Height = new int(height); // 在堆区中开辟
        cout << "构造函数int age: " << m_age << ", height: " << *m_Height << endl;
    }

    Person(Person &p) {
        m_age = p.m_age;
        m_Height = new int(*p.m_Height); // 这里拷贝时，在堆区重新申请了一块数据空间，用来存放拷贝的值
    }

    ~Person() {
        if (m_Height != NULL) {
            delete m_Height;
            m_Height = NULL;
        }
        cout << "析构函数" << endl;
    }

public:
    int m_age;
    int * m_Height;
};

int main() {
    // Person p1(10);
    Person p1(10, 20);
    Person p2(p1);
    cout << "p2 age: " << p2.m_age << endl;
    return 0;
}
