#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string function(float a){
    string n,m ;
    int A =a;
    n="Bulat";
    m="Desimal";
    
    if (a == A){
        return n;
    }
        else {
            return m;
        }
}

int main(){
    float a;
    
    cin >> a;
    
    cout << function(a);
    
    return 0;
}
