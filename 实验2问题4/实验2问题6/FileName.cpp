#include <iostream>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
    std::cout << "请输入第一个正整数: ";
    std::cin >> num1;
    std::cout << "请输入第二个正整数: ";
    std::cin >> num2;

    std::cout << "最大公约数: " << gcd(num1, num2) << std::endl;
    std::cout << "最小公倍数: " << lcm(num1, num2) << std::endl;

    return 0;
}
