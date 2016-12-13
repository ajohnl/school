/* 13. En una clase de 5 alumnos se han realizado tres examenes y se requiere determinar el ´
  numero de: ´
  a) Alumnos que aprobaron todos los examenes. ´
  b) Alumnos que aprobaron al menos un examen.
  c) Alumnos que aprobaron unicamente el ´ ultimo examen. ´
  Realice un programa que permita la lectura de los datos y el calculo de las estadısticas. */

#include <iostream>
#include <stdio.h>

int main(){
 using std::cin;
 using std::cout;
 int times = 0, numero = 1;
 int passall = 0, passlast = 0, pass1 = 0;
 double g1,g2,g3;
 while (times<5){
 	cout << "Introduce las notas del " << numero << "º alumno: \n";
	cin >> g1 >> g2 >> g3;
	if (g1 >=5 && g2 >=5 && g3 >=5){passall++;}
	if (g1 < 5 && g2 < 5  && g3 >= 5){passlast++;}
	if (g1 >= 5 | g2 >= 5 | g3 >= 5){pass1++;}
	times++;
	numero++;
	}
 cout << "Aprobado todos los examenes: " << passall << " \n";
 cout << "Aprobado al menos un examen: " << pass1 << " \n";
 cout << "Aprobado solo el ultimo: " << passlast << " \n";
 return 0;}
