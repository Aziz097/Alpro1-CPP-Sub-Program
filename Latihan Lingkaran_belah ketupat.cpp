#include <iostream>
	
using namespace std;

int main () {
	const float PI = 3.14; 
	float r, D, luas1, luas2, luas3;
	
	cout << "Input Jari-Jari Lingkaran\t\t:"; // (\t) untuk memrapihkan seperti tab
	cin >> r;
	
	luas1 = PI*r*r;
	
	cout << "Luas lingkaran\t\t\t\t:" << luas1 <<endl;
	printf("\n\n"); //membuat jarak seperti enter
	

	cout << "Input Diagonal Belah Ketupat\t\t:";
	cin >> D;
	
	luas2 = (D*D)/2;
	
	cout << "Luas belah ketupat\t\t\t:" << luas2 <<endl;
	printf("\n\n");
	
	cout << ("-------maka-------") <<endl;
	
	luas3 = luas1 - luas2;
	cout << "Luas Belah Daerah yang di arsir\t\t:" << luas3 <<endl;
	
	
}
