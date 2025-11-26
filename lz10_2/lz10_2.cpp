#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    double x;
    cout << "Введіть значення x: ";
    cin >> x;

    double S = 0; // сума

    for (int k = 1; k <= 12; k++) {
        S += (sin(k * x) + k) / (pow(x + 0.1, 1.0 / k) + 6 * k);
    }

    cout << "Результат обчислення суми: " << S << endl;

    return 0;
}