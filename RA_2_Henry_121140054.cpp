#include<iostream>
using namespace std;

void fungsi(){
	for(int i=1; i<=25; i++){
		if(i%2==0){
			if(i%4!=0 && i%6!=0){
				cout << i <<" ";
			}
		}
	}
	 
}

int main(){
	cout << "Bilangan genap antara 1 s.d 25 yang tidak habis dibagi 4 dan 6"<<endl;
	fungsi();
}
