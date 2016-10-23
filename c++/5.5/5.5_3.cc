/*3. Escribe un programa que defina un vector de numeros y calcule la suma de sus ele- ´
 * mentos*/

#include <stdio.h>
#include <iostream>

int main(){using std::cin;using std::cout;
	int array[5] = {1,2,3,4,5},t=0,sum=0;
	while(t<5){
		sum=sum + array[t];
		t++;
		}
	cout << sum << "\n";
	}
