#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
    int score;
};

int main() {
    struct Student s1 = {"李四", 20, 60};

    Student s2;
    s2.name = "张三";
    s2.age = 18;
    s2.score = 80;

    Student * p1 = &s1;

    cout << "姓名：" << p1->name << " 年龄："  << p1->age << " 分数：" << p1->score << endl;

    Student arr[3] = {
        {"李四1", 20, 60},
        {"李四2", 21, 61},
        {"李四3", 22, 62}
    };
    for (int i = 0; i < 3; i++) {
        cout << "姓名：" << arr[i].name << " 年龄："  << arr[i].age << " 分数：" << arr[i].score << endl;
    }

    return 0;
};
