/* Escriba un programa que lea el nombre y la nota de 10 alumnos y calcule la califica-
cion promedio. El programa debe mostrar en la salida estandar el nombre de aquellos
alumnos cuya nota supera la media. Haga dos versiones del programa. En la primera
version utilice dos vectores: uno para almacenar las notas de los alumnos y otro para
almacenar sus nombres. En la segunda vers ́
on del programa utilice un ́
unico vector
de estructuras de tipo alumno con dos campos: nota y nombre.*/

#include <stdio.h>
#include <iostream>
#include <string>

int main(){using std::cin;using std::cout;using std::string;
	struct enroll{string name;double grade;};
	enroll student[10];
	cout << "[alumno] [nota]\n";
	for(int i=0;i<10;i++){
		cin >> student[i].name >> student[i].grade;
	}
	double media = 0;
	for(int i=0;i<10;i++){
		media = media + student[i].grade;
	}
	media = media / 10;
	cout << "\n";
	for(int i=0;i<10;i++){
		if(student[i].grade > media){
			cout << student[i].name << " ";
		}
	}
	cout << "\n";
	return 0;
}
