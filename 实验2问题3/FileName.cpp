#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "�����������ε������߳���" << endl;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) { // �ж��Ƿ��ܹ���������
        double p = (a + b + c) / 2; // ������ܳ�
        double area = sqrt(p * (p - a) * (p - b) * (p - c)); // �������
        cout << "����һ��";
        if (a == b && b == c) {
            cout << "�ȱ������Σ�";
        }
        else if (a == b || a == c || b == c) {
            cout << "���������Σ�";
        }
        else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            cout << "ֱ�������Σ�";
        }
        else if (a * a + b * b < c * c || a * a + c * c < b * b || b * b + c * c < a * a) {
            cout << "�۽������Σ�";
        }
        else {
            cout << "��������Σ�";
        }
        cout << "�ܳ�Ϊ" << a + b + c << "�����Ϊ" << area << endl;
    }
    else {
        cout << "���������޷�����һ��������" << endl;
    }
    return 0;
}