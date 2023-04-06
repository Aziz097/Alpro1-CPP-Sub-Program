#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	float A,B;
	
	cin >> A >> B;
	
	if (A>3.50 && B>=2) {
		
		if (A>3.50 && B>=2.0) {
			cout << "Selamat, anda diterima sebagai cleaning service di perusahaan ini!";
		}
	}
	else {
			if (A>3.50 && B<2.0) {
				cout << "Pengalaman kerja anda kurang lama. Anda diwajibkan mengikuti seleksi wawancara.";
			}
				else if (A<3.50 && B>2.0) {
						cout << "Maaf, anda tidak memenuhi syarat untuk menjadi cleaning service di perusahaan ini.";
					}
					else if (A<3.50 && B<2.0) {
						cout << "Maaf, anda tidak memenuhi syarat untuk menjadi cleaning service di perusahaan ini.";
						}
				
					
	}
	
	
	return 0;
	
}

