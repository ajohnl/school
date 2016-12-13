/*7.  Implemente una funci
on que calcule la suma de los d
ıgitos de un n
umero entero posi-
tivo. Por ejemplo, dado 3452 la suma de sus d
ıgitos es
3 + 4 + 5 + 2 = 14
.*/

#include <iostream>
#include <string>

using namespace std;
int sum(string n){
	int total=0;
	for(int i=0;i<n.length();i++){
		switch(n[i]){
			case '0':total=total+0;break;
			case '1':total=total+1;break;
			case '2':total=total+2;break;			
			case '3':total=total+3;break;
			case '4':total=total+4;break;
			case '5':total=total+5;break;
			case '6':total=total+6;break;
			case '7':total=total+7;break;
			case '8':total=total+8;break;
			case '9':total=total+9;break;
		}
	}
	return total;
}

int main(){
	string a;
	getline(cin,a);
	cout << "La suma es " << sum(a) << "\n";
	return 0;
}
