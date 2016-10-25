#include <iostream>
#include <stdio.h>
#include <math.h>
//Ejercicio 13.

int main(){using std::cout;using std::cin;
	cout << "Introduce tres lados de un triangulo, separados por espacios.\n";
	int a, b, c;
	cin >> a >> b >> c;
	int bplusc;
	bplusc=b+c;
	int bsqrd, csqrd;
	bsqrd=pow(b,2);
	csqrd=pow(c,2);
	int bpcsqrd; 
	bpcsqrd= bsqrd + csqrd;
	int asqrd;
	asqrd = pow(a,2);
	if(a >= bplusc){cout << "NO SE TRATA DE UN TRIANGULO\n";return 0;}
	if(asqrd == bpcsqrd){cout << "Es un triangulo rectangulo.\n";}
	if(asqrd < bpcsqrd){cout << "Se trata de un triangulo acutangulo.\n";}
	if(asqrd > bpcsqrd){cout << "Se trata de un triangulo obtusangulo.\n";}
	if (a == b && a == b && a == c){cout << "Es un triangulo equilatero.\n";}return 0;}
