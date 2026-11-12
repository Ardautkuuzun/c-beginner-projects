#include <iostream>
using namespace std;
int main() {
    double sayi1, sayi2;
    char islem;
    cout << "Birinci sayiyi girin: ";
    cin >> sayi1;
    cout << "Islemi girin (+, -, *, /): ";
    cin >> islem;
    cout << "Ikinci sayiyi girin: ";
    cin >> sayi2;

    switch (islem) {
        case '+':
            cout << "Sonuc: " << sayi1 << " + " << sayi2 << " = " << sayi1 + sayi2 << endl;
            break;
        case '-':
            cout << "Sonuc: " << sayi1 << " - " << sayi2 << " = " << sayi1 - sayi2 << endl;
            break;
        case '*':
            cout << "Sonuc: " << sayi1 << " * " << sayi2 << " = " << sayi1 * sayi2 << endl;
            break;
        case '/':
            if (sayi2 != 0) {
                cout << "Sonuc: " << sayi1 << " / " << sayi2 << " = " << sayi1 / sayi2 << endl;
            } else {
                cout << "Hata" << endl;
            }
            break;
        default:
            cout << "Gecersiz" << endl;
            break;
    }
    return 0;
}
