/*6.  Realice una funci
 ́
on que determine si un entero positivo es primo.*/
#include <iostream>
using namespace std;
bool prime(int n){
	bool x=false;
	for(int i=n-1;i>1;i--){
		if((n%i)==0){
			x=true;
		}
	}
	return x;
}

int main(){
	int a;
	cin >> a;
	if(prime(a)==false){cout << "Es primo\n";}
	else{cout << "No es primo\n";}
	return 0;
}	
