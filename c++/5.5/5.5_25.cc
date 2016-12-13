/*Realice un programa que lea una cadena de caracteres de la entrada estandar y muestre ´
 * en la salida estandar cu ´ antas ocurrencias de cada vocal existen en la cadena. */
#include <iostream>
#include <stdio.h>

int main(){using std::cin;using std::cout; using std::string;
	string chain;
	getline(cin,chain);
	int t=0,i=0,a=0,e=0,u=0,o=0;
	string ws = ", ";
	while(t < chain.length()){
		switch (chain[t]){
		case 'a': a++; break;
		case 'i': i++; break;
		case 'u': u++; break;
		case 'o': o++; break;
		case 'e': e++; break;
		case 'A': a++; break;
		case 'I': i++; break;
		case 'U': u++; break;
		case 'O': o++; break;
		case 'E': e++; break;
		}
		t++;
		}
	cout << "\n En la cadena " << chain << " las occurencias de a, e, i, u, o son " << a << ws  << e << ws << i << ws << u << ws << o << " respectivamente\n";
	return 0;}
	
