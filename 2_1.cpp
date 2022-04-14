#include <iostream>
#include <limits>
#include <string>
#include <bitset> //输出二进制的头文件

struct Student {
    double score = 9.5;
    int age = 12;
    bool male = true;
};

int main() {
    // 取值空间
    unsigned int x = std::numeric_limits<unsigned int>::max();
    std::cout << x << " : " << std::bitset<sizeof(int) * 8>(x) << std::endl;
    std::cout << "before: x = " << x << std::endl;
    x = x + 1;
    std::cout << x << " : " << std::bitset<sizeof(int) * 8>(x) << std::endl;
    std::cout << "after + 1: x = " << x << std::endl;

    int y = std::numeric_limits<int>::max();
    std::cout << y << " : " << std::bitset<sizeof(int) * 8>(y) << std::endl;
    std::cout << "before: y = " << y << std::endl;
    y += 1;
    std::cout << y << " : " << std::bitset<sizeof(int) * 8>(y) << std::endl;
    std::cout << "after + 1: y = " << y << std::endl;

    int z = std::numeric_limits<int>::min();
    std::cout << z << " : " << std::bitset<sizeof(int) * 8>(z) << std::endl;
    std::cout << "before: z = " << z << std::endl;
    z -= 1;
    std::cout << z << " : " << std::bitset<sizeof(int) * 8>(z) << std::endl;
    std::cout << "after - 1: z = " << z << std::endl;

    // 内存对齐
    Student s1;
    std::cout << sizeof(s1) << std::endl;
    std::cout << alignof(Student) <<std::endl;

    return 0;
}
