#include <iostream>
#include <iomanip>

using namespace std;


double calculateTax(double income); // kalkulator podatkowy

int main() {
    double income = 0;

    cout << fixed << setprecision(2);

    cout << "Podaj dochód: ";
    cin >> income;

    if (income < 0) {
        cout << "Dochód nie może być mniejszy od 0";
        return -1;
    }

    if (calculateTax(income) < 0) {
        cout << "Podatek = 0 zł";
        return 0;
    }

    cout << "Podatek = " << calculateTax(income) << " zł";
}

double calculateTax(double income) {
    const int BIG_INCOME = 74048;
    const int MEDIUM_INCOME = 37024;

    double tax;

    if (income > BIG_INCOME) {
        tax = 17648.44 + 0.4 * (income - BIG_INCOME);
    }
    else if (income > MEDIUM_INCOME) {
        tax = 6541.24 + 0.3 * (income - MEDIUM_INCOME);
    }
    else {
        tax = 0.19 * income - 493.32;
    }

    return tax;
}
