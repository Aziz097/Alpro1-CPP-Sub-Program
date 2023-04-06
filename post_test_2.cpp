#include <iostream>
using namespace std;

int main () {
	float harga,jumlah,total,hasil,diskon;
	string index;
	
	cout << "Masukan Jumlah buku yang ingin dibeli :";
	cin  >> jumlah;
	
	cout << "Masukan Harga buku :";
	cin  >> harga;
	
	hasil = jumlah*harga-jumlah*harga*20/100;
	total = jumlah*harga-jumlah*harga*10/100;
	
	if (jumlah >100) {
		cout << "Total Harga INI :" << hasil <<endl;
	}
	else if (jumlah <=100) {
		cout << "Total Harga :" << total <<endl;
	}

}
