#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


void calculateCone(); // stożek
void calculateCylinder(); // walec
void calculateBall(); // kula

int main()
{
    cout << fixed << setprecision(4);

    unsigned char choose;

    cout << "Wybierz figurę geometryczną, z której wyznaczę objętość i pole całkowite!" << endl;
    cout << "<1> Stożek" << endl;
    cout << "<2> Walec" << endl;
    cout << "<3> Kula" << endl;
    cout << "Wybierz: ";
    cin >> choose;
    switch (choose)
    {
        case '1':
            calculateCone(); // stożek
            break;
        case '2':
            calculateCylinder(); // walec
            break;
        case '3':
            calculateBall(); // kula
            break;
        default:
            cout << "Nieprawidłowy wybór!";
            break;
    }
}

void calculateCone() // stożek
{
    const double pi = 3.141592653589793238462643;
    double h, r, l; // h - wysokość, r - promień podstawy, l - tworząca
    double V, Pc; //  V - objętość, Ppc - pole pow. calk.

    cout << "<----- Obliczanie objętości i pola pow. calk. stożka ----->" << endl;
    cout << "Podaj h: ";
    cin >> h;
    cout << "Podaj r: ";
    cin >> r;

    if (h <= 0 || r <= 0)
    {
        cout << "Wprowadzone dane muszą być DODATNIE!";
    }
    else
    {
        V = 1.0 / 3 * pi * r * r * h;
        l = sqrt(h * h + r * r);
        Pc = pi * r * r + pi * r * l;

        cout << "Objętość = " << V << endl;
        cout << "Pole pow. calk. = " << Pc << endl;
    }
}

void calculateCylinder() // walec
{
    const double pi = 3.141592653589793238462643;
    double r, H; // r — promień, H — wysokość bryły
    double V, Pc; // V - objętość, Pc - Pole pow. calk

    cout << "<----- Obliczanie objętości i pola pow. calk. walca ----->" << endl;
    cout << "Podaj promień: ";
    cin >> r;
    cout << "Podaj wysokość bryły: ";
    cin >> H;

    if (r <= 0 || H <= 0)
    {
        cout << "Wprowadzone dane muszą być DODATNIE!";
    }
    else
    {
        V = pi * r * r * H;
        Pc = (2 * pi * r * r) + (2 * pi * r * H);

        cout << "Objętość = " << V << endl;
        cout << "Pole pow. calk. = " << Pc << endl;
    }
}

void calculateBall() // kula
{
    const double pi = 3.141592653589793238462643;
    double r; // r — promień
    double V, Pc; // V - objętość, Pc - pole pow. calk.

    cout << "<----- Obliczanie objętości i pola pow. calk. kuli ----->" << endl;
    cout << "Podaj promień: ";
    cin >> r;

    if (r <= 0)
    {
        cout << "Wprowadzone dane muszą być DODATNIE!";
    }
    else
    {
        V = 4.0 / 3.0 * pi * pow(r, 3);
        Pc = 4 * pi * r * r;

        cout << "Objętość = " << V << endl;
        cout << "Pole pow. calk. = " << Pc << endl;
    }
}