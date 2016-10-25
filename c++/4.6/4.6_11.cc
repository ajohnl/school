/*Cree un programa que lea el grado de aproximacion—n ´ umero de t ´ erminos de la sumatoria— ´
y devuelva un valor aproximado de Π.*/

#include <stdio.h>
#include <iostream>
#include <math.h>
int main(){
 using std::cin;
 using std::cout;
 double i,grado,pi,piold,piend,div;
 cout << "Grado de aproximacion: \n";
 cin >> grado;
 piold=(6/1);
 piend=0;
 i = 1;
 while(i != grado){
 	div = (i * i);
 	pi = (6 / div);
 	piend = piend + pi;
	i++;}
 cout << "Pi es, con un grado de aproximacion de " << grado << ": " << sqrt(piend) << "\n";
 return 0;}
