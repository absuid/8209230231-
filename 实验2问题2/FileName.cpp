#include <iostream>
using namespace std;

int main() {
    double x, y;
    cout << "������x��ֵ��";
    cin >> x;
    if (x < 0 || x >= 10) {
        cout << "x��ֵ������Ч��Χ�ڣ�" << endl;
        return 0;
    }
    if (x < 1) {
        y = 3 - 2 * x;
    }
    else if (x < 5) {
        y = 1 + 2 / (4 * x);
    }
    else {
        y = x * x;
    }
    cout << "y��ֵΪ��" << y << endl;
    return 0;
}