#include <iostream>

using namespace std;

int coztojest__iloczyn(int a, int b){
    if(b == 0)
        return 0;
    if(b % 2 == 0)
        return coztojest__iloczyn(a+a, b/2);
    return coztojest__iloczyn(a+a, b/2) +a;
}

int coztojest__potegowanie(int a, int b){
    if(b == 0)
        return 1;
    if(b % 2 == 0)
        return coztojest__potegowanie(a*a, b/2);
    return coztojest__potegowanie(a*a, b/2) *a;
}

int main() {
    /* A)
     * JAKIE BEDĄ WYNIKI WYWOLAN coztojest(2, 25) i coztojest(3, 11)
     * wyniki -> 50 i 33
     * */
    cout << coztojest__iloczyn(2, 25) << endl; // output: 50
    cout << coztojest__iloczyn(3, 11) << endl; // output: 33
    cout << coztojest__iloczyn(2, 2) << endl;  // output: 4

    cout << coztojest__potegowanie(2, 10) << endl; // output: 1024
    cout << coztojest__potegowanie(3, 4) << endl;  // output: 81
    cout << coztojest__potegowanie(2, 2) << endl;  // output: 4


    /* B)
     * Co oblicza funkcja coztojest(a, b), zakładając, że a i b są liczbami całkowitymi dodatnimi?
     *
     * funkcja oblicza iloczyn argumentow
     * */


    /* C)
     *  Co będzie obliczać funkcja coztojest(a, b) (zakładając, że a i b są liczbami całkowitymi dodatnimi),
     *  gdy znak + zostanie zastąpiony przez *, a instrukcja return 0 przez instrukcję return 1?
     *
     *  funkcja będzie obliczać potege elementu, gdzie
     *  a -> podstawa
     *  b -> wykladnik
     * */
}
