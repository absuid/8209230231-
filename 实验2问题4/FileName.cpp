#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2, result;

    cout << "�������������+��-��*��/��%����";
    cin >> op;

    cout << "������������������";
    cin >> num1 >> num2;

    switch (op) {
    case '+':
        result = num1 + num2;
        cout << "�����" << result << endl;
        break;
    case '-':
        result = num1 - num2;
        cout << "�����" << result << endl;
        break;
    case '*':
        result = num1 * num2;
        cout << "�����" << result << endl;
        break;
    case '/':
        if (num2 != 0) {
            result = num1 / num2;
            cout << "�����" << result << endl;
        }
        else {
            cout << "���󣺳�������Ϊ�㣡" << endl;
        }
        break;
    case '%':
        if (num2 != 0) {
            result = fmod(num1, num2);
            cout << "�����" << result << endl;
        }
        else {
            cout << "���󣺳�������Ϊ�㣡" << endl;
        }
        break;
    default:
        cout << "���󣺷Ƿ��������" << endl;
        break;
    }

    return 0;
}