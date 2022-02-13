#include <iostream>
using namespace std;

class Person {
public:
    Person() {
        cout << "无参构造函数:" << age << endl;
    }

    Person(int a) {
        age = a;
        cout << "有参构造函数: " << age << endl;
    }

    Person(const Person &p) {
        age = p.age;
        cout << "拷贝构造函数: " << age << endl;
    }

    ~Person() {
        cout << "析构函数: " << age << endl;
    }

private:
    int age;
};

int main() {
    Person p1;
    Person p2(1);
    Person p3(p2);

    // warning: empty parentheses interpreted as a function declaration
    // Person p4();

    return 0;
}
