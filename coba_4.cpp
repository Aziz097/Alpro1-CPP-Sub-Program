#include <iostream>
#include <string>
using namespace std;

int main () {
	string nama, golongan_darah, prodi;
	int NIM;
	float IP;
	
	cout << "Masukan nama anda : "; 
	getline (cin,nama);				
	
	cout << "Masukan NIM anda :";
	cin >> NIM;
	
	cout << "Prodi :";
	cin.getline(prodi,20); 
	
	cout << "Masukan IP anda :";
	cin >> IP;
	
	cout << "Masukan Golongan darah anda :";
	cin >> golongan_darah;
	
	printf("\n\n");
	
	cout << "Nama :" << nama <<endl;
	cout << "NIM :" << NIM <<endl;
	cout << "IP :" << IP <<endl; 
	cout << "Golongan Darah : " << golongan_darah <<endl;
	
	return 0;
}
