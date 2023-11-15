#include <iostream>
using namespace std;

int main() {
    char inputChar;
    cout << "请输入一个字符: ";
    cin >> inputChar;

    if (inputChar >= 'a' && inputChar <= 'z') {
        
        char uppercaseChar = inputChar - 32;  
        cout << "转换为大写后为: " << uppercaseChar << endl;
    }
    else {
        
        int asciiValue = inputChar;
        cout << "ASCII码值为: " << asciiValue << endl;
    }

    return 0;
}
