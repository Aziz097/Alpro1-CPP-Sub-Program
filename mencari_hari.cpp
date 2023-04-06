#include <iostream>
#include <conio.h>
using namespace std;

int main () {
	int n;
	
	cout <<"Masukan hari dalam angka : ";
	cin >> n;
	
	if (n==1) 
		cout << "senin"<<endl;
	else if (n==2) 
		cout<<"selasa"<<endl;
	else if  (n==3) 
		cout<<"rabu"<<endl;
	else if (n==4) 
		cout<<"kamis"<<endl;			
	else if (n==5) 
		cout<<"jumat"<<endl;	
	else if (n==6) 
		cout<<"sabtu"<<endl;	
	else if (n==7) 
		cout<<"minggu"<<endl;
	else 
		cout<<"Salah, Masukkan antara 1-7" <<endl;
		


return 0;
}
