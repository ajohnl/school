//Realice un programa que solicite de la entrada estandar un entero del 1 al 10 y muestre en la salida estandar su tabla de multiplicar.

#include <iostream>
#include <stdio.h>

int main(){
	using std::cin;
	using std::cout;
	cout << "Introduce un numero entero del 1 al 10\n";
	int number;
	cin >> number;
	int times = 1;
	if(number >10 | number <1){cout << number << " no esta en el rango [1,10].\n";goto leave;}
	while(times<=10){
		cout << number * times << "\n";
		times++;}
leave:		return 0;}
