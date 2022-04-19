//
// Created by Bright on 2022/4/19.
//
#include <iostream>

/* 隐式类型转换， 导致比较错误 */

int main() {
    int x = -1;
    unsigned int y = 3;
    std::cout << bool(x < y) << std::endl;
};
