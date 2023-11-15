#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "请输入一行字符: ";
    std::getline(std::cin, input);

    int letterCount = 0, spaceCount = 0, digitCount = 0, otherCount = 0;

    for (char c : input) {
        if (isalpha(c)) {
            letterCount++;
        }
        else if (isspace(c)) {
            spaceCount++;
        }
        else if (isdigit(c)) {
            digitCount++;
        }
        else {
            otherCount++;
        }
    }

    std::cout << "输入中包含：" << std::endl;
    std::cout << "字母个数: " << letterCount << std::endl;
    std::cout << "空格个数: " << spaceCount << std::endl;
    std::cout << "数字个数: " << digitCount << std::endl;
    std::cout << "其他字符个数: " << otherCount << std::endl;

    return 0;
}
