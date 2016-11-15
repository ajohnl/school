#include <stdio.h>
#include <iostream>
#include <string>

int main(){using std::cout;using std::cin;using std::string;
	struct Pack{
		int code;
		double mass;
		string type;
		};
	cout << "Cuantos paquetes hay?\n";
	int size;
	cin >> size;
	Pack package[size];
	string intro;
	for(int i=0;i<size;i++){
		cout << "Introduce el codigo del " << i+1 << "º paquete\n";
		cin >> package[i].code;
		
		mass:	cout << "Introduce la masa del " << i+1 << "º paquete\n";
			cin >> package[i].mass;
		if(package[i].mass < 0 || package[i].mass > 60){goto mass;}
		type:	cout << "Introduce el tipo (Provincial, Nacional o Internacional):\n";
		getline(cin>>std::ws,package[i].type);
		
		if(package[i].type != "Provincial" && package[i].type != "Nacional" && package[i].type != "Internacional"){goto type;}
	}
	cout << "Los codigos de tipo Internacional son:\n";
	for(int i=0;i<size;i++){
		if(package[i].type == "Internacional"){
			cout << package[i].code << "\n";
		}
	}
	double totalmass=0;
	for(int i;i<size;i++){
		totalmass = totalmass + package[i].mass;
	}
	double avarage;
	double totalsize=size;
	avarage = (totalmass / totalsize);
	cout << "\nLa media es " << avarage << ",";
	int overavarage=0;
	for(int i=0;i<size;i++){
		if(package[i].mass > avarage){overavarage++;}
	}
	float percentage;
	percentage = ((overavarage/totalsize)*100);
	cout << "el porcentaje de paquetes mas pesados que la media es " << percentage << "%\n\n";
	int nac=0,inter=0,prov=0;
	for(int i=0;i<size;i++){
		if(package[i].type == "Provincial"){prov++;}
		if(package[i].type == "Nacional"){nac++;}
		if(package[i].type == "Internacional"){inter++;}
	}
	if(nac<inter && inter > prov){cout << "Hay mas internacionales.\n";}
	if(inter<nac && nac > prov){cout << "Hay mas nacionales.\n";}
	if(inter<prov && prov>nac){cout << "Hay mas provincionales\n";}
	cout << "Introduce una masa:\n";
	double mass1;
	cin >> mass1;
	cout << "Estos paquetes tienen masa menor: \n";
	for(int i=0;i<size;i++){
		if(package[i].mass < mass1){
			cout << "Codigo: " << package[i].code << "\n" << "Tipo: " << package[i].type << "\n\n";
		}
	}
}






