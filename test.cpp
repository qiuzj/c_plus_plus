#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
    int score;
} s0;

const double PI = 3.14;

class Circle {
public:
    int m_r;

    double calculate() {
        return 2 * PI * m_r;
    }
};

int main() {
    struct Student s1;
    Student s3;
    s1.name = "qiuzj";
    s1.age = 18;
    s1.score = 2000;
    struct Student s2 = {"hfyan", 1, 2};
    cout << "hello world" << s1.name << s1.age << s1.score << endl;
    cout << "hello world" << s2.name << s2.age << s2.score << endl;
    s0.age = 5;
    cout << "hello world" << s0.name << s0.age << s0.score << endl;
    // system("pause");

    Circle c1;
    c1.m_r = 10;
    cout << "圆的周长：" << c1.calculate() << endl;

    return 0;
}
