#include<iostream>

using namespace std;


long long calculateFactorial(int n) { // obliczanie silni
    if (n < 0) {
        return -1;
    }

    if (n > 20) {
        return -2;
    }

    long long s = 1;

    for (int i = 2; i <= n; i++) {
        s = s * i;
    }

    return s;
}

int main() {
    int number;

    cout << "Podaj dla jakiej liczby obliczyc silnie: ";
    cin >> number;

    long long factorial = calculateFactorial(number);

    switch (factorial) {
        case -1:
            cout << "Wartosc silni jest ujemna (> 0)";
            break;
        case -2:
            cout << "Wartosc silni jest zbyt wysoka (< 20)";
            break;
        default:
            cout << to_string(number) + "! = " + to_string(factorial); // number! = factorial
            break;
    }
}