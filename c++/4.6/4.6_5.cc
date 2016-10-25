/*Realice un programa que lea de la entrada estandar numeros hasta que se introduzcaun cero. En ese momento el programa debe terminar y mostrar en la salida est
andar el numero de valores mayores que cero leıdos.*/


#include <iostream>
#include <stdio.h>

int main(){
	using std::cin;
	using std::cout;
	int number = 1;
	int times = 0;
	while(number != 0){
		if(number > 0){times++;}
		cout << "Introduce numero entero, 0 para terminar.\n";		
		cin >> number;}
	cout << "Has introducido " << times-1 << " numeros mayores que 0\n";
	}
