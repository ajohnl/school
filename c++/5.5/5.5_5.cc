/*5. Desarrolle un programa que lea de la entrada estandar un vector de enteros y deter- ´
 * mine el mayor elemento del vector.*/

#include <stdio.h>
#include <iostream>

int main(){using std::cout;using std::cin;
	int t=0,size;
	cout << "Introduce numero de elementos:\n";
	cin >> size;
	int array[size];
	while(t<size){
		cout << "Introduce el " << t+1 << "º entero:\n";
		cin >> array[t];
		t++;
	}
	int maxint = array[0];
	t=1;
	while(t < size){
		if(array[t] > maxint){
			maxint = array[t];
		}
		t++;
	}
cout << "El numero mayor es " << maxint << "\n";
return 0;	
}
