#include <iostream>
#include <stdio.h>
// 5.  Escriba un programa que lea dos numeros y determine cual de ellos es el mayor.

int main(){
	std::cout << "Intruduce dos numeros, separalos con espacios\n";
	int a, b;
	std::cin >> a >> b;
	if(a<b){std::cout << "El numero mayor es " << b << "\n";}
	if(a>b){std::cout << "El numero mayor es " << a << "\n";}
	if (a == b){std::cout << "Los dos numeros son iguales\n";}
	getchar();
	return 0;
}	
