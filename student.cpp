#include<iostream>
#include<string>
using namespace std;

class Student {
public:
    string m_Name;
    int m_Id;

    void showStudent() {
        cout << "姓名：" << m_Name << " 学号：" << m_Id << endl;
    }

    void setName(string name) {
        m_Name = name;
    }
};

class Person {
public:
    string m_Name;
protected:
    string m_Car;
private:
    int m_Password;

private:
    void func() {
        m_Name = "张三";
        m_Car = "拖拉机";
        m_Password = 123456;
    }
}

int main() {
    Student s1;
    // s1.m_Name = "张三";
    s1.setName("李四");
    s1.m_Id = 1;
    s1.showStudent();

    Person p1;
    p1.m_Name = "李四";
    p1.m_Car = "";
    p1.m_Password = "";

    p1.func();
    // return 0;
}
