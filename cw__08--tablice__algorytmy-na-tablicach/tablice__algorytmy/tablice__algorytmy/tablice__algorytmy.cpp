#include <iostream>
#include <random>

using namespace std;

// funkcja pomocnicza do zadania 4 
// generuje losowe liczby calkowite dla tablicy
void wygeneruj_wartosci(int* t, int n, int min, int max) {
	default_random_engine generator(unsigned(time(0)));
	uniform_real_distribution<> losowa(min, max);
	for (int i = 0; i < n; i++)
		t[i] = losowa(generator);
}

/******************** ZADANIE 1 ********************/
float wyznacz_max(const float* t, int n) {
	//zmienna max przechowuje aktualna najwieksza wartosc
	float min = t[0];
	for (int i = 1; i < n; i++) {
		if (t[i] > min) { // aktualizacja zmiennej max
			min = t[i];
		}
	}
	return min;
}

/******************** ZADANIE 2 ********************/
bool jest_scisle_malejacy(const float* t, int n) {
	for (int i = 1; i < n; i++) {
		if (t[i - 1] <= t[i]) {
			return false; //nie jest scisle malejacy
		}
	}
	return true;  //jest scisle malejacy
}

/******************** ZADANIE 3 ********************/
bool jest_geometryczny(const float* t, int n) {
	float q = t[1] - t[0];
	for (int i = 2; i < n; i++) {
		if ((t[i] / t[i - 1]) != q) {
			return false; // nie jest geometryczny
		}
	}
	return true; // jest geometryczny
}

/******************** ZADANIE 4 ********************/
int znajdz_podzielny_element(const int* t, int n, int *liczba) {
	for (int i = 0; i < n; i++) {
		if (t[i] % *liczba == 0) {
			*liczba = t[i]; 
			// nadpisanie oryginalnej zmiennej
			// liczba = podzielny element tablicy

			return i; 
			// zwrocenie indeksu tablicy, 
			// na ktorym zostala znaleziona podzielna liczba
		}
	}

	return -1; // brak podzielnych liczb
}


int main() {
	/* Zawartosc funkcji main() odnosi sie do zadania 4 */

	int liczba_usera, wielkosc_tablicy;

	cout << "Podaj wielkosc tablicy: ";
	cin >> wielkosc_tablicy;
	cout << "Podaj liczbe calkowita: ";
	cin >> liczba_usera;

	int* tablica = new int[wielkosc_tablicy];

	wygeneruj_wartosci(tablica, wielkosc_tablicy, 1, 1000);
	// generuje tablice z zakresu 1.. 1000

	cout << "--------------------\n";
	cout << "Wartosci tablicy: \n";
	for (int i = 0; i < wielkosc_tablicy; i++) {
		// generuje wszystkie elementy tablicy
		cout << tablica[i] << ", ";
	}
	cout << "\n--------------------\n";

	int indeks_podzielnego_elementu = 
		znajdz_podzielny_element(tablica, wielkosc_tablicy, &liczba_usera);

	if (indeks_podzielnego_elementu != -1) {
		cout << "Znaleziona podzielna liczba w tablicy: " << liczba_usera << endl;
		// liczba usera zostala zaktualizowana w funkcji  znajdz_podzielny_element()
		// poprzez przekazanie w argumencie funkcji referencji do tej liczby
		cout << "Indeks elementu tablicy: " << indeks_podzielnego_elementu;
	}
	

	delete[] tablica; // zwolnienie pamieci
}