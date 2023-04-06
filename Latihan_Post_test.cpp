#include <iostream>
using namespace std;

int main () {
	int bil_A, bil_B;
	
	cout << "Masukan Bilangan Pertama :";
	cin >> bil_A;
	
	cout << "Masukan Bilangan Kedua :";
	cin >> bil_B;
	
	if (bil_A > bil_B) {
		cout << "Bilangan Pertama lebih besar"  ;
	}
	else {
		cout <<"Bilangan kedua lebih besar";
	}
	
}
