#include <iostream>
using namespace std;

void bubble(int * arr, int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int a = 10;
    int b = 20;

    // 常量指针
    const int * p1;
    // *p1 = 11; // 错误
    p1 = &b; // 正确

    // 指针常量
    int * const p2 = &a;
    *p2 = 21; // 正确
    // p2 = &b; // 错误

    // const既修饰指针，也修饰常量
    const int * const p3 = &a;
    // *p3 = 30; // 错误
    // p3 = &b; // 错误

    int arr[10] = {1,10,3,5,2,9,6,4,7,8};
    int * p = arr; // arr就是数组的首地址
    for (int i = 0; i < 10; i++) {
        // cout << arr[i] << endl;
        cout << *p << endl;
        p++;
    }

    cout << "\nbubble result: " << endl;
    int len = sizeof(arr) / sizeof(arr[0]);
    // int * p4 = arr;
    bubble(arr, len);
    for (int i = 0, * p4 = arr; i < len; i++, p4++) {
        cout << *p4 << endl;
    }

    return 0;
}
