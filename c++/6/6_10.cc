/*10.  Realice una funci
 ́
on que tome como par
 ́
ametros un vector de n
 ́
umeros y devuelva la
suma de sus elementos.*/
#include <iostream>

using namespace std;

double sum(const double n[],const int length){
	double x=0;
	for(int i=0;i<length;i++){
		x=x+n[i];
		}
	return x;
}
int main(){
	const int size=6;
	double v[size]={1,2,3,4,5,6};
	cout << "La suma es " << sum(v,size);
	return 0;
}
