#include <iostream>
#include <iomanip>

using namespace std;


double calculateIncome(double income);


int main()
{
    cout << fixed << setprecision(2);

    double income;

    cout << "Podaj dochód: ";
    cin >> income;

    if (income < 5000)
    {
        cout << "Zbyt niski dochód!";
        return -1;
    }

    cout << "Dochód (netto) = " << calculateIncome(income);
}

double calculateIncome(double income)
{
    double tax, result;

    if (income > 74048)
    {
        tax = 17648.44 + (income * 0.4);
        return income - tax;
    }

    if (income > 37024)
    {
        tax = 6541.24 + (income * 0.3);
        return income - tax;
    }

    tax = (income * 0.19) - 493.32;
    result = income - tax;
    return result;
}
