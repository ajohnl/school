/*20.  Realice una funcion que dada una matriz y un numero de fila de la matriz devuelva el mınimo de los elementos almacenados en dicha fila.*/
#include <iostream>
using namespace std;
double Min(double mat[][4],int f,int l){
	double min=mat[f][0];
	for(int i=1;i<l;i++){
		if(mat[f][i]<min){min=mat[f][i];}
	}
	return min;
}
int main(){
	const int files=3,collumns=4;
	double matrix[files][collumns]={{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}};
	cout << Min(matrix,2,4);
	return 0;
}

