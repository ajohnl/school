/*12.  Realiza una funcion que tome como parametros un vector de numeros y su tamano y cambie el signo de los elementos del vector.*/
#include <iostream>
using namespace std;
void negativify(double n[],int l){
	for(int i=0;i<l;i++){
		n[i]=(-n[i]);
	}
}
int main(){
	int intro;
	cin >> intro;
	const int size=intro;
	double v[size];
	for(int i=0;i<size;i++){
		cin >> v[i];
	}
	negativify(v,size);
	for(int i=0;i<size;i++){
		cout << v[i] << "\n";
	}
	return 0;
}
