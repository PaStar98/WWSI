#include <iostream>

using namespace std;


double displayMinNumber(double x, double y, double z);
double displayMaxNumber(double x, double y, double z);

int main() {
    double number1, number2, number3;
    char choose = 0;

    cout << "Podaj trzy liczby: ";
    cin >> number1 >> number2 >> number3;

    cout << "Podaj jaką liczbę chcesz wyznaczyć <min: 1>, <max: 2>: ";
    cin >> choose;

    if (choose == '1') {
        cout << "Najmniejsza wartość = " << displayMinNumber(number1, number2, number3);
    } else if (choose == '2') {
        cout << "Największa wartość = " << displayMaxNumber(number1, number2, number3);
    } else {
        cout << "Podana wartość jest nieprawidłowa!";
        return -1;
    }
}

double displayMinNumber(double x, double y, double z) {
    double min = x;
    if (y < min) {
        min = y;
    }

    if (z < min) {
        min = z;
    }

    return min;
}

double displayMaxNumber(double x, double y, double z) {
    double max = x;
    if (y > max) {
        max = y;
    }

    if (z > max) {
        max = z;
    }

    return max;
}