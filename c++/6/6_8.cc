/*8. Realiza una funcion que tome como par ´ ametros dos cadenas de caracteres y devuelva ´
 * la cadena mas larga y la m ´ as corta. */

#include <iostream>
#include <string>
using namespace std;
struct Maxmin{string max;string min;};
Maxmin cmp(string n,string m){
	Maxmin x;
	if(n.length() < m.length()){x.max=m;x.min=n;
	}
	else{x.max=n;x.min=m;
	}
	return x;
}
int main(){
	string a,b;
	getline(cin,a);
	getline(cin,b);
	Maxmin sol=cmp(a,b);
	cout << "Max: " << sol.max << "\n" << "Min: " << sol.min << "\n";
	return 0;
}
