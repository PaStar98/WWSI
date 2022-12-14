#include <iostream>

using namespace std;

int main() {
    int array [10]; // tablica 10-elementowa
    int arrayLength = sizeof(array) / sizeof(*array); // dlugosc tablicy

    int evenElementCounter = 0; // zlicza liczbe parzystych elementow tablicy
    int oddElementSum = 0; // zlicza sume nieparzystych elementow tablicy

    int userInput; // dane wprowadzone przez uzytkownika


    for (int i = 1; i <= arrayLength; i++) {
        cout << "Podaj " << i << " liczbe: ";
        cin >> userInput;
        array[i] = userInput;

        if ((array[i] % 2 == 0) && (array[i] != 0)) {
            evenElementCounter++;
        }

        if (array[i] % 2 != 0) {
            oddElementSum += array[i];
        }
    }

    cout << "Liczba parzystych elementow tablicy = " << evenElementCounter << endl << endl;
    cout << "Suma nieparzystych elementow tablicy = " << oddElementSum;

}
