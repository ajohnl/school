#include <stdio.h>
#include <iostream>

//Ejercicio 11


using std::cout;
using std::cin;

int main(){
	cout << "Introduce su edad:\n";
	int age;
	cin >> age;
	if(age >= 18 && age <= 25){cout << "Tienes entre 18 y 25 an~os\n";}
	return 0;
}
