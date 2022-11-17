#include <iostream>
#include <iomanip>

using namespace std;


double calculateIncome(double income);


int main()
{
    double income;

    cout << fixed << setprecision(2);

    cout << "Podaj dochód: ";
    cin >> income;

    cout << "Dochód (netto) = " << calculateIncome(income);
}

double calculateIncome(double income)
{
    double tax;

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

    tax = (income * .19) - 493.32;
    return income - tax;
}