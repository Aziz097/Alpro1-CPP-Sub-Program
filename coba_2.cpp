#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main () {
	int N;
	
	cin >> N;
	
	if (N>=9999 && N<100000) {
		cout << "puluhan";
	}
		else if (N>9 && N <100) {
			cout << "puluhan";
		}
			else if (N>99 && N <1000) {
				cout << "ratusan";
			}
				else if (N>999 && N <10000) {
					cout << "ribuan";
				}
					else  {
						cout << "puluhan ribu";
					}

	return 0;
}
