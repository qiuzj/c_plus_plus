#include <iostream>
using namespace std;

class Person
{
public:
    /* data */
    int age;
public:
    Person(/* args */);
    Person(int age) {
        this->age = age;
    }
    Person & add(Person & p) {
        this->age += p.age;
        return *this; // *this表示当前对象本身
    }

    void func1() {
        cout << "invoke func1()" << endl;
    }

    void func2() {
        // if (this == NULL) {
        //     return;
        // }
        cout << "invoke func2()" << age << endl;
    }

    ~Person();
};

Person::Person(/* args */)
{
}

Person::~Person()
{
}


int main() {
    Person p1(10);
    cout << p1.age << endl;
    Person p2(20);
    Person p3(30);
    p1.add(p2).add(p3);
    cout << p1.age << endl;

    Person * p4 = NULL;
    p4->func1();
    p4->func2(); // zsh: segmentation fault

    return 0;
}
