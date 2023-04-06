#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int max(int a, int b, int c){
	if (a>b && a>c)
	{
		return a;
	}
	else if (b>a && b>c)
	{
		return b;
	}
	else 
	{	
		return c;
	}
}

int main () {
	
	int x, y, z;
	int maksimum;

	cout << "Masukan bilangan pertama :";
	cin >> x;
	
	cout << "Masukan bilangan kedua :";
	cin >> y;
	
	cout << "Masukan bilangan ketiga :";
	cin >> z;
	
	maksimum = max(x,y,z);
	
	cout << "Bilangan terbesar adalah :" << maksimum << endl;

}

