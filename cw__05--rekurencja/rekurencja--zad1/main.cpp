#include <iostream>

using namespace std;


// count() -> liczy liczbe obrotow funkcji rekurencyjnej nwd(a, b)
int count() {
    static int counter = 0;
    return ++counter;
}

int nwd(int a, int b) {
    cout << "nwd(a = " << a << ", b = " << b << ") -> " << count() << " obrot" << endl;

    if ((a >= b) && (b > 0)) {
        if (a % b != 0) {
            return nwd(b, a % b);
        }

        if (a % b == 0) {
            return b;
        }
    }

    // funkcja zwraca -1 jezeli nie jest spelniony warunek -> ((a >= b) && (b > 0))
    return -1;
}

int main() {
    // greatestCommonDivisor -> zmienna przechowujaca najwiekszy wspolny dzielnik (nwd)
    int greatestCommonDivisor = nwd(7250080 , 40);

    // sprawdzenie poprawnosci argumentow funkcji nwd(a, b)
    if (greatestCommonDivisor == -1) {
        cout << "Niepoprawne argumenty funkcji!\n";
        cout << "Upewnij się, że a >= b > 0";

        return -1;
    }

    cout << "Najwiekszy wspolny dzielnik = " << greatestCommonDivisor << endl;
    cout << "----------------------" << endl;
}


/*
 * PSEUDO TESTY
 * testy przeprowadzone na stronie:
 * https://www.naukowiec.org/kalkulator-nwd-nww.html
 *
 * nwd(78, 34)       -> wynik = 2,  liczba wywolan = 4
 * nwd(7236485, 40)  -> wynik = 2,  liczba wywolan = 2
 * nwd(7250080 , 40) -> wynik = 40, liczba wywolan = 1
 * */