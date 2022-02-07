#include <iostream>
#include <string>
using namespace std;

// 告诉编译器，Building类会在后面实现，使用到时先不要报错
class Building;
class GoodGay {
public:
    GoodGay();
public:
    void visit();
    void visit2();
private:
    Building* building;
};

class Building {
    // GoodGay的成员函数visit()可以访问本类的私有成员
    friend void GoodGay::visit();

public:
    Building();

public:
    string m_SittingRoom;
private:
    string m_BedRoom;
};

// 在类外实现构造函数
Building::Building() {
    m_SittingRoom = "客厅";
    m_BedRoom = "卧室";
}

GoodGay::GoodGay() {
    building = new Building;
}

// 在类外实现成员方法
void GoodGay::visit() {
    cout << "sittingRoom: " << building->m_SittingRoom << endl;
    // 好友访问私有属性
    cout << "sittingRoom: " << building->m_BedRoom << endl;
}

void GoodGay::visit2() {
    cout << "sittingRoom: " << building->m_SittingRoom << endl;
    // 好友访问私有属性
    // cout << "sittingRoom: " << building->m_BedRoom << endl; // 成员 "Building::m_BedRoom" (已声明 所在行数:26) 不可访问C/C++(265)
}

int main() {
    GoodGay g;
    g.visit();
    g.visit2();
    return 0;
}
