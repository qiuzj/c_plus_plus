#include <iostream>
using namespace std;

class Cube
{
private:
    int l;
    int w;
    int h;

public:
    Cube() {
        cout << "我是构造函数" << endl;
    }
    ~Cube() {
        cout << "我是析构函数" << endl;
    }

    void setL(int l1) {
        l = l1;
    }
    int getL() {
        return l;
    }

    void setW(int w1) {
        w = w1;
    }
    int getW() {
        return w;
    }

    void setH(int h1) {
        h = h1;
    }
    int getH() {
        return h;
    }

    int calculateArea() {
        return 2*(l*w + l*h + w*h);
    }
    int calculateVolume() {
        return l*w*h;
    }


    bool isSameFromClass(Cube c2) {
        if (l == c2.getL() && w == c2.getW() && h == c2.getH()) {
            return true;
        }
        return false;
    }
};

bool isSame(Cube &c1, Cube &c2) {
    if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH()) {
        return true;
    }
    return false;
}


int main() {
    Cube c1;
    c1.setL(10);
    c1.setW(10);
    c1.setH(10);
    cout << "面积：" << c1.calculateArea() << endl;
    cout << "体积：" << c1.calculateVolume() << endl;

    Cube c2;
    c2.setL(10);
    c2.setW(10);
    c2.setH(10);
    bool ret = isSame(c1, c2);
    cout << "相等：" << ret << endl;
    if (ret) {
        cout << "相等" << endl;
    } else {
        cout << "不相等" << endl;
    }
    cout << "相等：" << c1.isSameFromClass(c2) << endl;

    system("pause");

    return 0;
}
