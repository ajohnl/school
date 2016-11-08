/* Defina una estructura que sirva para representar a una persona. La estructura debe
contener dos campos: el nombre de la persona y un valor de tipo logico que indica si
la persona tiene algun tipo de minusvalıa. Realice un programa que dado un vector
de personas rellene dos nuevos vectores: uno que contenga las personas que no tienen
ninguna minusvalıa y otro que contenga las personas con minusvalıa.*/

#include <stdio.h>
#include <iostream>
#include <string>

int main(){using std::cin;using std::cout;using std::string;
	struct id{
		string name;
		bool crippled;
	};
	cout << "Introduce numero de personas:\n";
	cin >> size;
	int size;
	id person[size];
	char status[2];
	for(int i=0;i<size;i++){
		cout << "Introduce [NOMBRE] de la " << i+1 << "ª persona:\n";
		getline(cin>>ws,person[i].name);
		cout << "Tiene invalidez?(y/n)\n";
		cin >> status;
		if(strcmp(status.c_str(),"y")==0){
			person[i].cripped = true
		}
		}
	int crippledamount=0,healthyamount;
	for(int i=0;i<size;i++){
		if (person[i].cripple == true){
			crippledamount = crippledamount + 1;
		}
	healthyamount = size - crippledamount;
	id crippled[crippledamount];
	id healthy[healthyamount];
}
}
