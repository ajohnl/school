#include <iostream>
#include <stdio.h>
// 6.  Escriba un programa que lea tres numeros y determine cual de ellos es el mayor.

int main(){
	using std::cout;
	using std::cin;
        cout << "Intruduce tres numeros diferentes, separalos con espacios\n";
        int a, b, c;
        cin >> a >> b >> c;
        if(a<b){
		if(b<c){cout << "El numero mayor es " << c << "\n";}
		else{cout << "El numero mayor es " << b << "\n";}}
	if(a>b){
		if(a>c){cout << "El numero mayor es " << a << "\n";}

	else{cout << "El numero mayor es "<< c << "\n";}}
	if (a==b||a==c||b==c){cout << "DIJE NUMEROS DIFERENTES!!\n";}
        return 0;
}

