#include <iostream>
using namespace std;

int main() {
    char inputChar;
    cout << "������һ���ַ�: ";
    cin >> inputChar;

    if (inputChar >= 'a' && inputChar <= 'z') {
        
        char uppercaseChar = inputChar - 32;  
        cout << "ת��Ϊ��д��Ϊ: " << uppercaseChar << endl;
    }
    else {
        
        int asciiValue = inputChar;
        cout << "ASCII��ֵΪ: " << asciiValue << endl;
    }

    return 0;
}
