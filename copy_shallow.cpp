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

    ~Person() {
        if (m_Height != NULL) {
            delete m_Height; // 如果使用默认的浅拷贝方式Person p2(p1)，p1先释放m_Height，p2再次释放时报错，因为指向的是同一个堆数据
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
