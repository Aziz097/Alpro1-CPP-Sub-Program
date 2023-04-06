#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int sub(int a, int b, string c){
	if (c=="tambah"){
		return a+b;
	}
	else if(c=="kurang"){
		return a-b;
	}
	else if(c=="kali"){
		return a*b;
	}
	else {
		return a/b;
	}
}

int main (){
	int x, y;
	int sum;
	string c, z;
	
	cout << "Masukan bilangan pertama :";
	cin >> x;
	
	cout << "Masukan bilangan kedua :";
	cin >> y;
	
	cout << "Pilih operasi aritmatika :"<< endl;
	cout << "tambah "<<endl;
	cout << "kurang "<<endl;
	cout << "bagi "<<endl;
	cout << "kali "<<endl;
	cin >> z;
	
	sum = sub(x,y,z);
	cout << "Hasilnya adalah :" <<sum <<endl;

}
