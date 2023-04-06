#include <iostream>
using namespace std;

int main () {
	int nilai;
	string index, keterangan;
	
	cout << "Masukan Nilai :";
	cin  >> nilai;
	
	if(nilai >= 60) {

		
		if(nilai >= 80) {
			index = "A";
		}else if(nilai >= 70) {
		 	index = "B";
		}
		else {
		 	index = "C";
		}
	}	
		else {
		keterangan = "---------- Maaf Anda blom lulus ----------";
		
		if(nilai >= 40) {
			index = "D";
		}
		else {
			index = "E";
		}
	}

	cout << "Nilai Anda :" << nilai << endl;
	cout << "Index :" << index <<endl;
}
