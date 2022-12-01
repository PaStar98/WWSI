#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


double calculateSquare(double x, double e) { // obliczanie pierwiastka, metoda babilonska
    double w = 1; //
    int counter = 0; // licznik obrotow petli

    while(abs(w * w - x) >= e)  {
        w = (x / w + w) / 2;

        cout<< "Licznik obrotow petli: " << counter++ << endl;
        cout << "Wartosc w = " << w << endl;
    }

    return w;
}

int main() {
    cout << fixed << setprecision(8);

    double num;

    cout << "Podaj liczbe: ";
    cin >> num;

    cout << calculateSquare(num, 0.0000001);
}

/*
 * PSEUDO TESTY
 *
 * calculateSquare(25, 0.1) -> 5.00002318
 * calculateSquare(25, 0.01) -> 5.00002318
 * calculateSquare(25, 0.001) -> 5.00002318
 * calculateSquare(25, 0.0001) -> 5.00000000
 *
 * calculateSquare(144, 0.1) -> 12.00054573
 * calculateSquare(144, 0.01) -> 12.00000001
 * calculateSquare(144, 0.001) -> 12.00000001
 * calculateSquare(144, 0.0000001) -> 12.00000000
 *
 * calculateSquare(15129, 0.1) -> 123.00001444
 * calculateSquare(15129, 0.01) -> 123.00001444
 * calculateSquare(15129, 0.001) -> 123.00000000
 *
 * */