#include <iostream>

using namespace std;


bool isPrimeNumber(long long number) { // funkcja szukająca liczb pierwszych
    bool prime = true;

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            prime = false;
            break;
        }
    }

    return prime;
}


int main() {
    int minRange, maxRange; // minimalny i maksymalny zakres

    cout << "Podaj zakres <min> <max>: ";
    cin >> minRange >> maxRange;

    cout << "Liczby pierwsze w zakresie od " << minRange << " do " << maxRange << " to: " << endl;

    for (int i = minRange; i <= maxRange; i++) {
        if (i == 1) {
            continue;
        }

        if (isPrimeNumber(i)) {
            cout << i << ", ";
        }
    }
}

/*
 * [15 - 150]
 * -> 17, 19, 23,
 * 29, 31, 37,
 * 41, 43, 47,
 * 53, 59, 61,
 * 67, 71, 73,
 * 79, 83, 89,
 * 97, 101, 103,
 * 107, 109, 113,
 * 127, 131, 137,
 * 139, 149
 * */