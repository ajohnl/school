/*4. Escribe un programa que defina un vector de numeros y calcule la suma acumulada ´
 * de sus elementos.*/
#include <stdio.h>
#include <iostream>

int main(){using std::cout;
int array[6] = {3,5,2,8,2,8},t=0,sum=0;
	while(t<5){
		sum=sum + array[t];
		t++;
		}
	cout << sum << "\n";
}
