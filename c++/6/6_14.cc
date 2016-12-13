/*14.  Realiza una funcion que tome como parametros un vector de enteros y su tamano y devuelva un vector con los elementos impares del vector recibido.*/
#include <iostream>

using namespace std;
int makeodd(int n[],int l, int odd[]){
	int iodd=0;
	for(int i=0;i<l;i++){
		if(n[i]%2 !=0){
			odd[iodd]=n[i];
			iodd++;
		}
	}
	return iodd;
}
int main(){
	int v[100];
	int length;
	cin >> length;
	for(int i=0;i<length;i++){
		cin >> v[i];
	}
	int sol[100];
	int newlength=makeodd(v,length,sol);
	for(int i=0;i<newlength;i++){
		cout << sol[i];
	}
	return 0;
}
