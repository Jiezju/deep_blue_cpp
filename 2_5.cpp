//
// Created by Bright on 2022/4/19.
//
#include <iostream>

using namespace std;

int main() {
    int x = 42;
    char y = 33;

    cout << sizeof(x) << endl;
    cout << sizeof(y) << endl;

    // 指针 具有相同尺寸， 类型，表明 指针的开始到结束跨越几个字节
    int *p1 = &x;
    char *p2 = &y;

    cout << sizeof(p1) << endl;
    cout << sizeof(p2) << endl;

    return 0;
}
