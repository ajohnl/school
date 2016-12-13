/* Escriba un programa que lea el nombre y la nota de 10 alumnos y calcule la califica-
cion promedio. El programa debe mostrar en la salida estandar el nombre de aquellos
alumnos cuya nota supera la media. Haga dos versiones del programa. En la primera
versi ́
on utilice dos vectores: uno para almacenar las notas de los alumnos y otro para
almacenar sus nombres. En la segunda versi
 ́on del programa utilice ununico vector
de estructuras de tipo alumno con dos campos: nota y nombre.*/

//###############################VERSION 1######################################
#include <stdio.h>
#include <iostream>

int main(){using std::cin;using std::cout;
	std::string name[10];
	double grade[10];
	cout << "Introduce [NOMBRE] [NOTA]:\n";
	int i=0;
	while(i<10){
		cin >> name[i] >> grade[i];
		i++;
	}
	double sum=0;
	i=0;
	while(i<10){
		sum=sum+grade[i];
		i++;
	}
	double avarage = (sum / 10);
	i=0;
	while(i<10){
		if(grade[i]>avarage){
			cout << name[i] << " ";
		}
	i++;
	}
	cout << "\n";
	return 0;
}
