/*20. Realice un programa que calcule la suma de dos matrices cuadradas de 3x3.*/

#include <iostream>
#include <stdio.h>
int main(){using std::cin; using std::cout;
	int mat1[3][3],mat2[3][3],i=0,t=0;
	cout << "Matriz 1:\n";
	while(i<3){

		cout << "Introduce la " << i+1 << "ª linea de la matriz:\n";
		while(t<3){
			cin >> mat1[i][t];
			t++;	
			}
		t=0;
		i++;
		}
	i=0;
	cout << "Matriz 2:\n";
	while(i<3){
		cout << "Introduce la " << i+1 << "ª linea de la matriz:\n";
		while(t<3){
			cin >> mat2[i][t];
			t++;	
			}
		t=0;
		i++;
		}
	i=0;
	cout << "\nLa suma de las matrices es: \n";
	while(i<3){
		while(t<3){
			cout << mat1[i][t] + mat2[i][t] << " ";
			t++;
			}
		cout << "\n";
		t=0;
		i++;
		}
	return 0;}
