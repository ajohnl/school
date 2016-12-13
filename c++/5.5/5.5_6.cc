/*6.  Escriba un programa que defina un vector de numeros enteros, solicite al usuario un
entero y muestre un mensaje en la salida est
andar indicando si el entero introducido
por el usuario se encuentra en el vector.*/

#include <stdio.h>
#include <iostream>

int main(){using std::cout;using std::cin;
	int const size=5;
	int array[size] = {1,2,3,4,5}, integer;
	cout << "Introduce un numero:\n";
	cin >> integer;
	bool found = false;
	int t=0;
	while(t < size && found == false){
		if (array[t] == integer){
			found = true;
		}
		t++;
	}
	if (found == true){
		cout << integer << " estaba en el vector.\n";
	}
	else{
		cout << integer << " no estaba en el vector.\n";
	}
return 0;
}
