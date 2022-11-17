#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


double sr_a(double x, double y); // średnia arytmetyczna
double sr_g(double x, double y); // średnia geometryczna
double sr_h(double x, double y); // średnia harmoniczna
double sr_p(double x, double y); // średnia potęgowa


int main()
{
    double result, number1, number2;
    bool flag = true;
    char choose = ' ';

    cout << fixed << setprecision(3);

    cout << "Jaką średnią obliczyć?";
    cout << "\n\ta - arytmetyczna\n\tg - geometryczna\n\th - harmoniczna\n\tp - potęgowa";
    cin >> choose;

    cout << "Podaj dwie liczby: ";
    cin >> number1 >> number2;

    switch (choose)
    {
        case 'a':
            result = sr_a(number1, number2);
            break;
        case 'g':
            result = sr_g(number1, number2);
            break;
        case 'h':
            result = sr_h(number1, number2);
            break;
        case 'p':
            result = sr_p(number1, number2);
            break;
        default:
            flag = false;
            break;
    }

    if (!flag)
    {
        cout << "Nieokreślona średnia";
        return -1;
    }
    else
    {
        if (isnan(result) || isinf(result)) // Jeśli wynik = NaN lub inf. — nie udało się wykonać obliczeń
        {
            cout << "Błędne dane - nie można dokonać obliczeń";
            return -1;
        }
        else // Jeżeli udało się wykonać obliczenia
        {
            cout << "Wynik = " << result;
        }
    }
}

double sr_a(double x, double y)
{
    return (x + y) / 2;
}

double sr_g(double x, double y)
{
    return sqrt(x * y);
}

double sr_h(double x, double y)
{
    return (2 * x * y) / (x + y);
}

double sr_p(double x, double y)
{
    double p;
    cout << "Podaj potęgę: ";
    cin >> p;
    return pow((pow(x, p) + pow(y, p)) / 2, (1 / p));
}