#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, x0, x1, diff;

    cout << "������һ����a��";
    cin >> a;

    if (a < 0) {
        cout << "��������޷����㸺����ƽ������" << endl;
        return 0;
    }

    x0 = a;
    do {
        x1 = (x0 + a / x0) / 2;
        diff = fabs(x1 - x0);
        x0 = x1;
    } while (diff >= 1e-5);

    cout << "ƽ������ֵΪ��" << x1 << endl;

    return 0;
}
