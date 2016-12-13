/*2.  Realiza una funci
 ́
on que tome como par
 ́
ametros dos cadenas de caracteres y devuelva
la cadena m
 ́
as larga.*/

#include <iostream>
#include <string>
using std::string;
string longer(string n, string m){
	if(n.length() > m.length()){return n;}
	else{return m;}
}
int main(){
	string a,b;
	getline(std::cin,a);getline(std::cin,b);std::cout << longer(a, b);
}
