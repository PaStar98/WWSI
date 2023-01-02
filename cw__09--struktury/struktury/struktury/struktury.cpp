/*EF pp*/
#include<iostream>
#include<algorithm>
using namespace std;

struct Zwierzak {
	char imie[10] = "";
	char gatunek[5] = "";
	int wiek;
	bool adoptowany = false;
};

Zwierzak wprowadz_dane_nowego_zwierzaka() {
	Zwierzak zwierzak;
	cout << "gatunek (pies/kot): "; cin >> zwierzak.gatunek;
	cout << "wiek: "; cin >> zwierzak.wiek;
	cout << "imie: "; cin >> zwierzak.imie;
	return zwierzak;
}
int zapisz_zwierzaka_w_bazie(const Zwierzak& zwierzak, Zwierzak zwierzaki[], int n) {
	zwierzaki[n] = zwierzak;
	n++;
	return n;
}
void pokaz_zwierzaka(const Zwierzak& zwierzak) {
	cout << zwierzak.imie << ", " << zwierzak.gatunek << ", " << zwierzak.wiek;
}
void pokaz_wszystkie_zwierzaki(const Zwierzak  zwierzaki[], int n) {
	for (int i = 0; i < n; i++) {
		pokaz_zwierzaka(zwierzaki[i]);
		cout << "\n";
	}
}


/********************** PRACA DOMOWA ZAD 1 - sortowanie **********************/
void sortowanie_zwierzakow_wzgledem_wieku(Zwierzak* zwierzaki, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j >= 1; j--) {
			if (zwierzaki[j].wiek < zwierzaki[j - 1].wiek) {
				int zmienna_pomocnicza; // pomaga zamienic miejscami wartosci w tablicy
				zmienna_pomocnicza = zwierzaki[j - 1].wiek;
				zwierzaki[j - 1].wiek = zwierzaki[j].wiek;
				zwierzaki[j].wiek = zmienna_pomocnicza;
			}
		}
	}
}
/*****************************************************************************/


/***************** PRACA DOMOWA ZAD 2 - zwierzaki do adopcji *****************/
void pokaz_zwierzaki_do_adopcji(const Zwierzak* zwierzaki, int n) {
	cout << "Zwierzaki do adopcji: \n";
	for (int i = 0; i < n; i++) {
		if (!zwierzaki[i].adoptowany) {
			cout << "Imie: " << zwierzaki[i].imie << "\n";
			cout << "Gatunek: " << zwierzaki[i].gatunek << "\n";
			cout << "Wiek: " << zwierzaki[i].wiek << "\n";
		}
	}
}
/*****************************************************************************/


/************** PRACA DOMOWA ZAD 3 - aktualizacja bazy zwierzat **************/
void adoptuj_zwierze(Zwierzak* zwierzaki, int n, string imie_zwierzecia) {
	for (int i = 0; i < n; i++) {
		if (zwierzaki[i].imie == imie_zwierzecia) {
			zwierzaki[i].adoptowany = true;
		}
	}
}
/*****************************************************************************/


int main() {
	Zwierzak zwierzaki[100];
	int liczba_zwierzakow = 0;
	char czy_nowy_zwierzak = 'n';
	string imie_zwierzecia = ""; // przechowuje imie zwierzecia, ktore ma byc adoptowane;

	do {
		Zwierzak nowy_zwierzak = wprowadz_dane_nowego_zwierzaka();
		liczba_zwierzakow = zapisz_zwierzaka_w_bazie(nowy_zwierzak, zwierzaki, liczba_zwierzakow);
		cout << "nowy zwierzak (t/n)? ";
		cin >> czy_nowy_zwierzak;
	} while (czy_nowy_zwierzak == 't');


	pokaz_zwierzaki_do_adopcji(zwierzaki, liczba_zwierzakow); // wyswietla zwierzeta do adopcji

	cout << "Podaj imie zwierzecia do adopcji: ";
	cin >> imie_zwierzecia; // wybor zwierzecia do adopcji

	adoptuj_zwierze(zwierzaki, liczba_zwierzakow, imie_zwierzecia); // aktualizacja bazy zwierzat -> zwierzak.adoptowany -> true
	pokaz_zwierzaki_do_adopcji(zwierzaki, liczba_zwierzakow);

}

