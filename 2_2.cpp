//
// Created by Bright on 2022/4/18.
// 自定义后缀
//

#include <iostream>

int operator "" __double(long double x) {
    return (int)x * 2;
}

int main() {
    int x = 3.14__double;

    std::cout << x << std::endl;
}
