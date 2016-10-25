/*8. Escriba un programa que lea valores enteros hasta que se introduzca un valor en el
rango [20, 30] o se introduzca el valor 0.*/

#include <stdio.h>
#include <iostream>

int main() {
 using std::cin;
 using std::cout;
 cout << "Introduce valores: \n";
 double a;
 a = 1;
 while(a != 0 && a < 20 | a > 30){
 	cin >> a;
	}
return 0;}
