/*7.  Escribe un programa que defina un vector de n
 ́
umeros y calcule si existe alg
 ́
un n
 ́
umero
en el vector cuyo valor equivale a la suma del resto de n
 ́
umeros del vector.*/

#include <iostream>
#include <stdio.h>

int main(){using std::cout;
	int const size=4;
	int number;
	int array[size] = {1,2,3,6};
	int t=0, sum=0;
	while(t < size){
		sum = sum + array[t];
		t++;
	}
	t=0;
	while(t < size){
		if(array[t] == (sum - array[t])){
			cout << array[t] << " Es igual a la suma de los otros numeros\n";
		}
		t++;
	}
return 0;
}
			
			
