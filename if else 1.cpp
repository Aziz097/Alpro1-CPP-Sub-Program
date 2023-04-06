#include <iostream>

using namespace std;

int main () {
	int x;
	
	cout << "Masukan Nilai :";
	cin  >> x;
	// penggunaan % sebagai pembagi jadi x dibagi 2
	if (x % 2 == 0) {
		cout << "Bilangan genap";
	}
	else {
		cout << "Bilangan ganjil";
	}
	
}
