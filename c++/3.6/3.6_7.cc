#include <iostream>
#include <stdio.h>
// 7.  Escriba un programa que lea cuatro numeros y determine cual de ellos es el mayor.

int main(){
	using std::cout;
	using std::cin;
        cout << "Intruduce cuatro numeros diferentes, separalos con espacios\n";
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(a<b){
		if(b<c && d<c){cout << "El numero mayor es " << c << "\n";}
		if(b<d && c<d){cout << "El numero mayor es " << d << "\n";}
		if(b>d && b>c){cout << "El numero mayor es " << b << "\n";}}
	if(a>b){
		if(a<c && d<c){cout << "El numero mayor es " << c << "\n";}
                if(a<d && c<d){cout << "El numero mayor es " << d << "\n";}
		if(a>d && a>c){cout << "El numero mayor es " << a << "\n";}

	

if (a==b||a==c||b==c||d==a||d==b||d==c){cout << "DIJE NUMEROS DIFERENTES!!\n";}
return 0;
}
}
