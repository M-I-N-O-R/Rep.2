#include <iostream>
#include <math.h>
using namespace std;
int main() {
    setlocale(0, ".1251");
    int a, b, c, d, e;
    cout << "Введiть значення а: ";
    cin >> a;
    d = a % 7;
    cout << "Введiть значення b: ";
    cin >> b;
    cout << "Введiть значення c: ";
    cin >> c;
    e = b % c;
    if (e == 0) {
        cout << "b дiлиться на c" << endl;
    }
    else {
        cout << "b не дiлиться на c" << endl;
    }
    if (b % 2 == 0 && c % 2 == 0) {
        cout << " b i c парнi" << endl;
    }
    else if (b % 2 == 0 || c % 2 == 0) {
        cout << "Одне iз значень парне" << endl;
    }
    else {
        cout << "Обидва дiапазони непарнi" << endl;
        cout << "Залишок = " << d << endl;
    }
    system("pause>>void");
    return 0;
}