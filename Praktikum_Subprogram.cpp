#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int PersegiPanjang(int p, int l){
	int luas1;
	
	luas1 = p*l;
	return luas1; 	
}

int Segitiga(int a, int t){
	int luas2;
	
	luas2 = a*t/2;
	return luas2;
}
float Lingkaran(int r){
	float luas3;
	const float phi = 3.14;
	
	luas3 = phi*r*r;
	return luas3;
}
int main(){
	string n;
	int a, t, p, l, r;
	cin >> n;
	
	if(n=="Segitiga"){
		cin >> a ;
		cin >> t;
		
		cout << Segitiga(a,t);
	}
		else if(n=="PersegiPanjang"){
			cin >> p;
			cin >> l;
			
			cout << PersegiPanjang(p,l);
		}
			else if(n=="Lingkaran") {
				cin >> r;
				
				cout << Lingkaran(r);
			}
	return 0;
}
