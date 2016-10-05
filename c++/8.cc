/*8.  Realice un programa que lea un valor entero y determine si se trata de un numero
par o impar. Sugerencia: un numero es par si el resto de dividirlo entre dos es cero.
Generalice el programa para que lea dos enteros,
n y m, y determine si n divide a m*/


#include <stdio.h>
#include <iostream>
int main(){
using std::cout;
using std::cin;

cout << "Introduce 1 para comprobar si un numero es par.\nIntroduce 2 para determinar si un numero divide a otro.\n";
int x;
cin >> x;

if(x==1){
cout << "Introduce un numero\n";
int a, b;
cin >> a;
b = 2;
if(a%b){cout << "El numero es impar!\n";}
else{cout << "El numero es par!\n";
getchar();
return 0;
}}

if (x==2){
	cout << "Introduce 2 numeros, separalos mediante un espacio.\n";
	int n, m;
	cin >> n >> m;
	if (m%n){cout << n << " no divide a " << m << "\n";}
	else{cout << n << " divide a " << m << "\n";}}}
