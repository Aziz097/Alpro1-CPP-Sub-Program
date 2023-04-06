// Example program
#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b;
    char n;
    float sum=0;
    cout << "KALKULATOR SEDERHANA" << endl;
    cin >> a;
	cin >> n; 
	
	sum=a;
    while(n!='=') {
		switch(n){
			case '+' :
				cin >> b >> n;
				sum+=b;
				break;
				
			case '-' :
				cin >> b >> n;
				sum-=b;
				break;
				
			case '*' :
				cin >> b >> n;
				sum*=b;
				break;
				
			case '/' :
				cin >> b >> n;
				sum/=b;
				break;
			}
		}
	if(n=='=') {
    	cout << sum;
    }
        
}

