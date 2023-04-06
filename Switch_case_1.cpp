#include <iostream>
using namespace std;

int main () {
	char index;
	string keterangan;
	
	cout << "Masukan Nilai Anda :";
	cin >> index;
	
	switch(index){
		case 'A' :
			keterangan = "Excelent";
			break;
		case 'B':
			keterangan = "Good";
			break;
		case 'C' :
			keterangan = "Fair";
			break;
		case 'D' :
			keterangan = "Poor";
			break;
			
		default:
			keterangan = "Tidak Diketahui";
			
	}
	cout << "Keterangan index nilai =" << keterangan << endl;
}
