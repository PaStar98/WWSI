/*EFigielska pp*/
/*
zliczanie cyfr liczby cakowitej
z wykorzystaniem dzielenia calkowitego
*/
#include<iostream>

using namespace std;


int zlicz_cyfry(long long a) {
    int i = 0; // licznik cyfr

    if (a == 0) {
        i = 1;
        return i;
    }

    if (a < 0) {
        a = a - (a * 2); // Konwersja ujemnej liczby do dodatniej (np. [-1337 = 1337]);
    } else {
        i = 0;
    }

    while (a > 0) {
        a /= 10;
        i++;
    }

    return i;
}

int main() {
    long long a;

    cout << "Podaj liczbe -> ";
    cin >> a;

    cout << "\nilosc cyfr liczby " << a << " wynosi " << zlicz_cyfry(a);
}

/* PSEUDO TESTY
 *
 * zlicz_cyfry(0) -> 1
 * zlicz_cyfry(-1) -> 1
 * zlicz_cyfry(-12) -> 2
 * zlicz_cyfry(1337) -> 4
 *
 * */