/*Realice un programa que lea l´ıneas de la entrada estandar hasta que se lea una l ´ ´ınea
 * cuyo contenido sea la cadena FIN. El programa debe mostrar en la salida estandar la ´
 * l´ınea mas larga de las le ´ ´ıdas y tambien la menor desde un punto de vista lexicogr ´ afico.*/

#include <stdio.h>
#include <string.h>
#include <iostream>

int main(){using std::cin;using std::cout; using std::string;
	string max="",min,line;
	getline(cin,line);
	if(strcmp(line.c_str(),"FIN")==0){
		cout << "bye\n";
		goto end;
	}
	min = line;
	while(strcmp(line.c_str(),"FIN")!=0){
		getline (cin, line);
		if(line.length() > max.length()){
			max = line;
		}
		if(line < min){
			min = line;
		}
	}
	if(strcmp(min.c_str(),"")==0){
		min = "VACIO";
	}
	if(strcmp(min.c_str()," ")==0){
		min = "ESPACIO";
	}
	cout << "\nCadena mas larga: " << max << "\nCadena de menor valor: " << min << "\n";
	end:
	return 0;
}
