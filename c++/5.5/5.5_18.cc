/*18.  Realizar un programa que lea los datos de un
array de 3x3 desde la entrada estandar y
calcule su determinante.*/

#include <iostream>
#include <stdio.h>

int main(){
	using std::cin;
	using std::cout;
	int matrix[3][3],t=0,i=0;
	while(i<3){
		cout << i+1 << "ª linea: \n";
		//cin >> matrix[t][i] >> matrix[t+1][i] >> matrix[t+2][i]; i marca la fila no la columna
		cin >> matrix[i][t] >> matrix[i][t+1]>> matrix[i][t+2];
		i++;
		//t=t+3;  t no puede cambiar porque le estás dando ya 0 1 y 2, si le sumas 3 pasa a una posción que no existe
	}
	i=0;
	t=0;
	cout << "Matriz introducida: \n";
	while(i<3){
		//cout << matrix[t][i] << " "<< matrix[t+1][i] << " "<< matrix[t+2][i] << "\n";
		cout << matrix[i][t] << " "<< matrix[i][t+1] << " "<< matrix[i][t+2] << "\n";
		i++;
		//t=t+3;
	}

	int det;
	det = (matrix[0][0] * matrix[1][1] * matrix[2][2]) + (matrix[0][1] * matrix[1][2] * matrix[2][0]) + (matrix[2][1] * matrix[1][0] * matrix[0][2])
		- (matrix[2][0] * matrix [1][1] * matrix[0][2]) - (matrix[2][1] * matrix[1][2] * matrix[0][0]) - (matrix[0][1] * matrix[1][0] * matrix[2][2]);
cout << "\nY su determinante es: " << det << ".\n";
return 0;
}
