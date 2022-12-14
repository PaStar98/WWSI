#include <iostream>

using namespace std;


// FUNKCJA Z WYKORZYSTANIEM REFERENCJI
void pacjentReferencja(double& w, double& h, int& a, char plec) {
    // w = waga, h = wzrost, a = wiek, plec 'k' (kobieta) lub 'm' (mezczyzna)

    double ppm, imc, d;
    // ppm = podstawowa przemiana materii, imc = idealna masa ciala, d = odstepstwo od idealnej masy ciala

    if (plec == 'm') {
        ppm = (10 * w) + (6.25 * h) - (5 * a) + 5;
        imc = 50 + 0.9 * (h - 152);
    } else if (plec == 'k') {
        ppm = (10 * w) + (6.25 * h) - (5 * a) - 161;
        imc = 45.5 + 0.9 * (h - 152);
    } else {
        cout << "Podana plec jest nieprawidlowa!";
        return;
    }

    d = w - imc;

    cout << "Wskaznik podstawowej przemiany materii = " << ppm << endl;
    cout << "Idealna masa ciala = " << imc << endl;
    cout << "Odstepstwo od idealnej masy ciala = " << d << endl;
}

// FUNKCJA Z WYKORZYSTANIEM WSKAZNIKOW
void pacjentWskaznik(double* w, double* h, int* a, char plec) {
    // w = waga, h = wzrost, a = wiek, plec 'k' (kobieta) lub 'm' (mezczyzna)

    double ppm, imc, d;
    // ppm = podstawowa przemiana materii, imc = idealna masa ciala, d = odstepstwo od idealnej masy ciala

    if (plec == 'm') {
        ppm = (10 * *w) + (6.25 * *h) - (5 * *a) + 5;
        imc = 50 + 0.9 * (*h - 152);
    } else if (plec == 'k') {
        ppm = (10 * *w) + (6.25 * *h) - (5 * *a) - 161;
        imc = 45.5 + 0.9 * (*h - 152);
    } else {
        cout << "Podana plec jest nieprawidlowa!";
        return;
    }

    d = *w - imc;

    cout << "Wskaznik podstawowej przemiany materii = " << ppm << endl;
    cout << "Idealna masa ciala = " << imc << endl;
    cout << "Odstepstwo od idealnej masy ciala = " << d << endl;
}

int main() {
    double waga, wzrost;
    int wiek;
    char plec;

    cout << "Podaj wage: ";
    cin >> waga;
    cout << "Podaj wzrost: ";
    cin >> wzrost;
    cout << "Podaj wiek: ";
    cin >> wiek;
    cout << "Podaj plec <m> lub <k>: ";
    cin >> plec;

    cout << "Funkcja z wykorzystaniem referencji" << endl;

    pacjentReferencja(waga, wzrost, wiek, plec);

    cout << endl << endl;

    cout << "Funkcja z wykorzystaniem wskaznikow" << endl;

    pacjentWskaznik(&waga, &wzrost, &wiek, plec);
}