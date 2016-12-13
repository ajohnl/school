/*17.  Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que muestre
la diagonal principal de la matriz.*/

#include <stdio.h>
#include <iostream>

int main(){using std::cout;
	int array[3][3] ={
	{1,2,3},
	{4,5,6},
	{7,8,9},
	};
	int t=0,i=0;
	while(t<3 && i<3){
		cout << array[t][i] << "\n";
		t++;
		i++;
	}
	return 0;
}
