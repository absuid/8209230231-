#include <iostream>
using namespace std;

int main() {
    int day = 1; 
    int num = 2; 
    double price = 0.8; 
    double total_price = 0; 

    while (num <= 100) { 
        total_price += price * num; 
        num *= 2; 
        day++; 
    }

    double avg_price = total_price / day; 
    cout << "ÿ��ƽ����" << avg_price << "Ԫ" << endl;
    return 0;
}