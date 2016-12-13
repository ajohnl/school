/*36. Desarrolle un programa en C++ que trabaje con un vector de personas. Cada persona
se almacena en una estructura con los siguiente campos: nombre, peso en kilos y altura
en metros. El programa debe comenzar leyendo de la entrada estandar los datos de ´
varias personas. A continuacion debe hacer lo siguiente: ´
Mostrar en la salida estandar un listado con los datos de las personas introduci- ´
das. El listado debe incluir el ´ındice de masa corporal de cada persona, este se ´
calcula como:
IMC =
peso
altura2
Mostrar en la salida estandar el nombre de la persona con mayor IMC. ´
Un listado con los nombres de las personas cuya altura supera una introducida
por el usuario.
Indicar si la persona con menor IMC es tambien la m ´ as peque ´ na. */

#include <stdio.h>
#include <iostream>
#include <string>

int main(){using std::cin;using std::cout;using std::string;
	struct Id{
	 string name;
	 double kg;
	 double m;
	 double imc;
	};
	cout << "Introduce numero de personas:\n";
	int n;
	cin >> n;
	const int size=n;
	Id person[size];
	for(int i=0;i<n;i++){
		cout << "introduce el nombre de la " << i+1 << "ª persona:\n";
		getline(cin>>std::ws,person[i].name);

		cout << "introduce los datos (masa altura) de la " << i+1 << "ª persona:\n";
		cin >> person[i].kg >> person[i].m;
		person[i].imc = (person[i].kg/(person[i].m * person[i].m));
	}
	cout << "Personas y datos:\n";
	for(int i=0;i<n;i++){
		cout << "Nombre: " << person[i].name << "\nMasa: " << person[i].kg << "\nAltura: " << person[i].m << "\nIMC: " << person[i].imc << "\n\n";
	}
	double imcmax=person[0].imc;
	for(int i=1;i<n;i++){
		if(imcmax<person[i].imc){
			imcmax = person[i].imc;
		}
	}
	cout << "Introduce una altura en metros:\n";
	double input;
	cin >> input;
	cout << "\nEstas personas son mas altas:\n";
	for(int i=0;i<n;i++){
		if(input < person[i].m){
			cout << person[i].name << "\n";
		}
	}
	double imcmin=person[0].imc,mmin=person[0].m;
	int imcind=0,mind=0;
	for(int i=1;i<n;i++){
		if(imcmin<person[i].imc){
			imcmin = person[i].imc;
			imcind = i;
		}
		if(mmin<person[i].m){
			mmin = person[i].m;
			mind = i;
		}
	}
	if(imcind == mind){
		cout << "\nLa persona con menor IMC es tambien la mas pequena.\n";
	}
	else{
		cout << "\nLa persona con menor IMC no es la persona mas pequena.\n";
	}
	return 0;
}


