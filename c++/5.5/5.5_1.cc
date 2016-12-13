/*1. Escribe un programa que lea de la entrada estandar un vector de n ´ umeros y muestre ´
 * en la salida estandar los n ´ umeros del vector con sus ´ ´ındices asociados.*/


#include <iostream>
#include <stdio.h>
int main(){
	using std::cin;
	using std::cout;
	int size;
	cout << "Cantidad de numeros:\n";
	cin >> size;
	size--;
	int array[size];
	int order = 0;
	while(order <= size){
	 cout << "Introduce el " << order +1 << "º numero.\n";
	 cin >> array[order];
	 order++;}
	int out=0;
	order = 0;
	while(order <= size){
	 cout << array[order];
	 order++;}
	return 0;
	}
