#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159; // ����Բ����
    double radius, height, volume;

    // �Ӽ�������Բ׶�׵İ뾶��׶��
    cout << "������Բ׶�׵İ뾶��";
    cin >> radius;
    cout << "������Բ׶�ĸߣ�";
    cin >> height;

    // ����Բ׶�����
    volume = PI * radius * radius * height / 3;

    // ������
    cout << "Բ׶�����Ϊ��" << volume << endl;

    return 0;
}
