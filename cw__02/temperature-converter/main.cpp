#include <iostream>
#include <iomanip>

using namespace std;


void fahrenheitToCelsius(); // F -> C
void celsiusToFahrenheit(); // C -> F
void fahrenheitToKelvin(); // F -> K
void celsiusToKelvin(); // C -> K
void kelvinToCelsius(); // K -> C
void kelvinToFahrenheit(); // K -> F

int main()
{
    cout << fixed << setprecision(2);

    unsigned char choose;

    cout << "<----- Przeliczanie Temperatury ----->" << endl;
    cout << "<1> F -> C" << endl;
    cout << "<2> C -> F" << endl;
    cout << "<3> F -> K" << endl;
    cout << "<4> C -> K" << endl;
    cout << "<5> K -> C" << endl;
    cout << "<6> K -> F" << endl;
    cout << "Wybierz: ";
    cin >> choose;

    switch (choose)
    {
        case '1':
            fahrenheitToCelsius();
            break;
        case '2':
            celsiusToFahrenheit();
            break;
        case '3':
            fahrenheitToKelvin();
            break;
        case '4':
            celsiusToKelvin();
            break;
        case '5':
            kelvinToCelsius();
            break;
        case '6':
            kelvinToFahrenheit();
            break;
        default:
            cout << "Niepoprawny wybór";
            break;
    }
}

void fahrenheitToCelsius() // F -> C
{
    double c, f; //c - celsius, f - fahrenheit
    cout << "Podaj temperature w stopniach Fahrenheita: ";
    cin >> f;
    if (f > -459.6667)
    {
        c = (f - 32) / 1.8;
        cout << f << " F = " << c << " C" << endl << endl;
    }
    else
    {
        cout << "Error: podana temp. jest mniejsza od zera bezwzględnego." << endl << endl;
    }
}

void celsiusToFahrenheit() // C -> F
{
    double c, f; //c - celsius, f - fahrenheit

    cout << "Podaj temperature w stopniach Celsiusza: ";
    cin >> c;
    if (c > -273.15)
    {
        f = c * 1.8 + 32;
        cout << c << "C = " << f << "F" << endl << endl;
    }
    else
    {
        cout << "Error: podana temp. jest mniejsza od zera bezwzględnego." << endl << endl;
    }
}

void fahrenheitToKelvin() // F -> K
{
    double k, f; //k - kelvin, f - fahrenheit

    cout << "Podaj temperature w stopniach Fahrenheita: ";
    cin >> f;
    if (f > -459.67)
    {
        k = (f + 459.67) * 5 / 9;
        cout << fixed << setprecision(2);
        cout << f << "F = " << k << "K" << endl << endl;
    }
    else
    {
        cout << "Error: podana temp. jest mniejsza od zera bezwzględnego." << endl << endl;
    }
}

void celsiusToKelvin() // C -> K
{
    double k, c; //k - kelvin, f - celsius

    cout << "Podaj temperature w stopniach Celsiusza: ";
    cin >> c;
    if (c > -273.15)
    {
        k = c + 273.15;

        cout << c << "C = " << k << "K" << endl << endl;
    }
    else
    {
        cout << "Error: podana temp. jest mniejsza od zera bezwzględnego." << endl << endl;
    }
}

void kelvinToCelsius() // K -> C
{
    double k, c; //k - kelvin, f - celsius

    cout << "Podaj temperature w stopniach Kelvina: ";
    cin >> k;
    if (k > 0)
    {
        c = k - 273.15;

        cout << k << "K = " << c << "C" << endl << endl;
    }
    else
    {
        cout << "Error: podana temp. jest mniejsza od zera bezwzględnego." << endl << endl;
    }
}

void kelvinToFahrenheit() // K -> F
{
    double k, f; //k - kelvin, f - celsius

    cout << "Podaj temperature w stopniach Kelvina: ";
    cin >> k;
    if (k > 0)
    {
        f = k * 1.8 - 459.67;

        cout << k << "K = " << f << "F" << endl << endl;
    }
    else
    {
        cout << "Error: podana temp. jest mniejsza od zera bezwzględnego." << endl << endl;
    }
}