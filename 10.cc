


/* 
9.  Escriba un programa que lea de la entrada estandar un caracter e indique en la salida estandar si el caracter es una vocal minuscula o no. 
*/

//vocales españoles: i e a o u

#include <stdio.h>
#include <iostream>
#include <string.h>

int main(){

using std::cout;
using std::cin;

cout << "Introduce un caracter\n";
char c;
cin >> c;

 switch(c)
      {
	case 'I':
		cout << "Vocal minuscula\n";
        	break;
          
	case 'E':
		cout << "Vocal mayuscula\n";
		break;

	
 	case 'A':
                cout << "Vocal mayuscula\n";
		break;


	case 'O':
                cout << "Vocal mayuscula\n";
                break;



	case 'U':
                cout << "Vocal mayuscula\n";
                break;


case 'i':
                cout << "Vocal minuscula\n";
                break;
case 'e':
                cout << "Vocal minuscula\n";
                break;
case 'a':
                cout << "Vocal minuscula\n";
                break;
case 'o':
                cout << "Vocal minuscula\n";
                break;
case 'u':
                cout << "Vocal minuscula\n";
                break;

default:	cout << "No es vocal\n";
}
getchar();
getchar();
return 0;}


