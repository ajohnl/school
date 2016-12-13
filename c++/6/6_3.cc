/*3.  Realice  una  funcion  que  tome  como  parametros  los  extremos  de  un  intervalo  y  unvalor y devuelva un valor logico que indique si el valor pertenece al intervalo cerrado
formado por los extremos. Por ejemplo, si los extremos sonavb, cona <=b, y el valoresx, entonces debe devolver ix2[a;b].*/


#include <iostream>
#include <string>
using namespace std;
bool cont(double a,double b,double c){
	bool x;
	if(c <= b && c >=a){x=true;}
	if(c < a || c > b){x=false;}
	return x;
}

int main(){
	double a,b,c;
	cin >> a >> b >> c;
	if(cont(a,b,c)==true){cout << "Si";}
	if(cont(a,b,c)==false){cout << "No";}
	return 0;
}
