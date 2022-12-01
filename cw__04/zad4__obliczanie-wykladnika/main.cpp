#include <iostream>
#include <iomanip>

using namespace std;


double myPower(double base, int exponent) { // obliczanie wykładnika, base = liczba, exponent = potega
    double result = 1;

    if (exponent == 0) {
        result = 1;
    }

    if (exponent > 0) {
        for (int i = 1; i <= exponent; i++) {
            result *= base;
        }
    }

    if (exponent < 0) {
        for (int i = 0; i > exponent; i--) {
            result = result * (1 / base);
        }
    }

    return result;
}

int main() {
    cout << fixed << setprecision(3);

    int exponent; // potega
    double base; // liczba

    cout << "Podaj liczbe: ";
    cin >> base;
    cout << "Podaj potege: ";
    cin >> exponent;

    cout << base << "^" << exponent << " = " << myPower(base, exponent);
}

/*
 * PSEUDO TESTY
 *
 * myPower(5, 3) -> 125.000
 * myPower(5, -3) -> 0.008
 *
 * myPower(2, 10) -> 1024.000
 * myPower(2, -10) -> 0.001
 *
 * myPower(12, 4) -> 20736.000
 * myPower(12, -4) -> 0.001
 *
 * myPower(1337, 0) -> 1.000
 * myPower(0, 1337) -> 0.000
 *
 * */