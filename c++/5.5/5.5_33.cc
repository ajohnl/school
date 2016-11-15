/* Defina una estructura que sirva para representar a una persona. La estructura debe
contener dos campos: el nombre de la persona y un valor de tipo logico que indica si
la persona tiene algun tipo de minusvalıa. Realice un programa que dado un vector
de personas rellene dos nuevos vectores: uno que contenga las personas que no tienen
ninguna minusvalıa y otro que contenga las personas con minusvalıa.*/

#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>

int main(){using std::cin;using std::cout;using std::string;
	struct Info{
		string name;
		bool crippled;
	};
	cout << "Introduce numero de personas:\n";
	int num;
	cin >> num;
	const int size=num;
	Info person[size];
	string status;
	for(int i=0;i<size;i++){
		cout << "Introduce [NOMBRE] de la " << i+1 << "ª persona:\n";
		getline(cin>>std::ws,person[i].name);
		cout << "Tiene invalidez?(y/n)\n";
		getline(cin>>std::ws,status);
		if(strcmp(status.c_str(),"y")==0){
			person[i].crippled = true;
		}
		else{person[i].crippled = false;
		}
		}
	int crippledamount=0,healthyamount;
	for(int i=0;i<size;i++){
		if (person[i].crippled == true){
			crippledamount = crippledamount + 1;
		}
	}
	healthyamount = size - crippledamount;
	const int newcrippledamount=crippledamount;
	const int newhealthyamount=healthyamount;
	string crippled[newcrippledamount];
	string healthy[newhealthyamount];
	int crip=0,health=0;
	for(int i=0;i<size;i++){
		if (person[i].crippled == true){
			crippled[crip]=person[i].name;
			crip++;
			}
		else{
			healthy[health]=person[i].name;
			health++;
		}
	}
	cout << "Los sanos son:\n";
	for(int i=0;i<healthyamount;i++){
		cout << healthy[i] << "\n";
	}
	cout << "Los minusvalidos son:\n";
	for(int i=0;i<crippledamount;i++){
		cout << crippled[i] << "\n";
}
}
