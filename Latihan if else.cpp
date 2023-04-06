#include <iostream>
#include <conio.h>
using namespace std;

int main () {
	int bilangan;
	
	cout << "1. Bilangan Positif" <<endl;
	cout << "2. Bilangan Negatif" <<endl;
	cout << "3. Bilangan Nol" <<endl;
	
	cout << "Masukan Bilangan :";
	cin  >> bilangan;
	
	if (bilangan > 0) {
		cout << "Bilangan Positif";
	}
	else if (bilangan < 0) {
		cout << "Bilangan Negatif";
	}
	else  {
		cout << "Bilangan Nol";
	}
	
	getch();
}
