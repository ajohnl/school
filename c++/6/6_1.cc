/*1.  Realiza una funci
 ́
on que tome como par
 ́
ametro un n
 ́
umero real y devuelva su valor
absoluto.*/

#include <iostream>


double absolut(double n){
	if(n<0){n=n*(-1);}
	return n;}
int main(){
	double a;
	std::cin >> a;
	std::cout << absolut(a);
	return 0;
}

