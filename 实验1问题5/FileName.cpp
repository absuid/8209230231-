#include <iostream>
#include <iomanip>
using namespace std;

double fahrenheit_to_celsius(double fahrenheit) {
    double celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}

int main() {
    double fahrenheit, celsius;
    cout << "�����뻪���¶ȣ�";
    cin >> fahrenheit;
    celsius = fahrenheit_to_celsius(fahrenheit);
    cout << "�����¶�Ϊ��" << fixed << setprecision(2) << celsius << " ��" << endl;
    return 0;
}
