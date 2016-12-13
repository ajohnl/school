/*4.  Realice una funcion que, dado un caracter, devuelva si es un d
ıgito.*/


#include <iostream>
#include <string>
using namespace std;
bool check(char n){
	bool x;
	if(n>='0' && n<='9'){x=true;}
	return x;}
int main(){
	char a;
	cin >> a;
	if(check(a)==true){cout << "Es un digito";}
	else{cout << "No es un digito";}
	return 0;
}
