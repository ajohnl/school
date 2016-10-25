//Ejercicio 14.
#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
int main(){using std::cout;using std::cin;
	
	char answer[4] = "yes";
	char no[4] = "no";
	
	while(std::strcmp(answer,no)!=0){
		int i, j;
		char c;
		cout << "Introduce una operacion simple:\n";
		cin >> i >> c >> j;
		switch(c){
		  case '+':cout << i+j << "\n";break;
		  case '-':cout << i-j << "\n";break;
		  case '*':cout << i*j << "\n";break;
		  case '/':cout << i/j << "\n";break;
		  default:cout << "Operacion no contemplada.\n";break;
		}
		cout << "Hacer otra operacion?(si/no)\n";
		cin >> answer;
	}
	cout << "\nAdios :)\n";
	return 0;
}
