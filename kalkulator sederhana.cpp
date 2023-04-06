#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b;
    char n;
    float sum=0;
    
	cout << "KALKULATOR SEDERHANA" << endl;
	cout << " + adalah tambah" << endl;
    cout << " - adalah kurang" << endl;
	cout << " * adalah kali" << endl;
	cout << " / adalah bagi" << endl;
	cout << endl;
		cin >> a;
		cin >> n; 
	
    sum=a;
    
	while(n!='=') {
        while(n=='+') {
            cin >> b >> n;
            sum+=b;
        }
        while(n=='-') {
            cin >> b >> n;
            sum-=b;
        }
        while(n=='*') {
            cin >> b >> n;
            sum*=b;
        }
        while(n=='/') {
            cin >> b >> n;
            sum/=b;
        }
    }
    if(n=='=') {
        cout << sum;
    }
}
