/*19. Realice un programa que lea de la entrada estandar 10 n ´ umeros e indique en la salida ´
 * estandar si el n ´ umero cero estaba entre los n ´ umeros le ´ ´ıdos.*/

#include <stdio.h>
#include <iostream>

int main(){
	using std::cout;
	using std::cin;
	const int find = 0;
	bool found = false;
	int i = 0;
	int bfound;
	while (i < 10){
		cin >> bfound;
		if (bfound == find){found = true;}
		i++;}
	if (found == true){cout << find << " estaba entre los numeros introducidos.\n";}
	
	
	else{ cout << "\n"<< find << " no estaba entre los numeros introducidos.\n";
	return 0;}}
