/*5.  Realice  una  funci
 ́
on  que,  dada  una  cadena  de  caracteres,  devuelva  cu
 ́
antos  d
 ́
ıgitos
contiene. Sugerencia: use la funci
 ́
on del ejercicio anterior.*/
#include <iostream>
#include <string>
int howmany(std::string n){
	int x=0;
	for(int i=0;i<n.length();i++){
		if (n[i]>='0' && n[i]<='9'){
			x++;
		}
	}
	return x;
}
int main(){
	std::string a;
	getline(std::cin,a);
	std::cout << howmany(a);
	return 0;
}
