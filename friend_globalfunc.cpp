#include <iostream>
using namespace std;

class Building {
    // 全局函数visit是Building类的好朋友，可以访问private成员
    friend void visit(Building* building);

public:
    Building() {
        m_SittingRoom = "客厅";
        m_BedRoom = "卧室";
    }

public:
    string m_SittingRoom;
private:
    string m_BedRoom;
};

void visit(Building* building) {
    cout << "访问：" << building->m_SittingRoom << endl;
    cout << "访问：" << building->m_BedRoom << endl;
}

int main() {
    Building b;
    visit(&b);
    return 0;
}
