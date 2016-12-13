/*Escribir un programa que solicite de la entrada estandar un nombre y compruebe si el ´
 * nombre se encuentra o no en un vector iniciado con una serie de nombres.*/

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
struct people{std::string name;};
int main(){
	using std::cin;
	using std::cout;
	using std::string;
	people list[3]={{"Platon"},{"Johnnie Walker"},{"aceite de oliva"}};
	bool found=false;
	int i=0;
	string thine_name;
	cout << "Introduce un nombre:\n";
	getline(cin,thine_name);
	while(i<3 && found == false){
		if(strcmp(thine_name.c_str(),list[i].name.c_str())==0){
			found=true;
		}
		i++;
	}
	if (found==true){cout << "El nombre esta en la lista.\n";}
	else{cout << "El nombre no esta en la lista.\n";}
	return 0;
}
