//6.  Realice un programa que calcule y muestre en la salida estandar la suma de los cuadrados de los numeros enteros del 1 al 10—la solucion es 385.












#include <iostream>
#include <stdio.h>

int main(){
        using std::cin;
        using std::cout;
	int init = 1;
	int number;
	int numbersqwr;
	int total = 0;
	while (init >=1 && init <= 10){
		number=init;
		numbersqwr = number * number;
		init++;
		total = total + numbersqwr;}
	cout << total << " \n";}		
		
	
