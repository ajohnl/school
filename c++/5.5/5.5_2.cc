/*2. Escribe un programa que defina un vector de numeros y muestre en la salida est ´ andar ´
 * el vector en orden inverso—del ultimo al primer elemento. */

#include <iostream>
#include <stdio.h>

int main(){
	using std::cin;
	using std::cout;
	int size,times=0;
	cout << "Cantidad de numeros: \n";
	cin >> size;
	size--;
	int array[size];
	while(times <= size){
		cout << "Introduce el " << times + 1 << "º numero entero\n";
		cin >> array[times];
		times++;}
	times=size;
	cout << "Numeros introducidos, al reves: ";
	while(times >= 0){
		cout << array[times];
		times--;}
	cout << "\n";
	return 0;}
