#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "������һ���ַ�: ";
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

    std::cout << "�����а�����" << std::endl;
    std::cout << "��ĸ����: " << letterCount << std::endl;
    std::cout << "�ո����: " << spaceCount << std::endl;
    std::cout << "���ָ���: " << digitCount << std::endl;
    std::cout << "�����ַ�����: " << otherCount << std::endl;

    return 0;
}
