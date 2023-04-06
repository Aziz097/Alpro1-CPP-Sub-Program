#include<iostream>
using namespace std;

int main(){
	int n;
	
	int sum=0;
	
	while(n!=-1){
		cin >> n;
		
		if(n%2==0){
			sum=sum+1;
		} 
		if(n==-1){
			break;
		}
	}
	cout << "Banyaknya data bilangan genap adalah = "<<sum;
	

}
