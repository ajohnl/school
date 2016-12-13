#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
struct Id{string name;int dni;int age;};
/*Funcion que, dado un n ´ umero de DNI ´ dni y un vector de personas, devuelva la
 * primera posicion del vector que contiene a una persona cuyo n ´ umero de DNI es ´
 * igual o superior a dni o el numero de elementos del vector si no hay tal persona ´
 * en el vector.*/
int check(Id n[],int d,int m){
	for(int i=0;i<m;i++){
		if(n[i].dni >= d){
			return i;
	}	}
	return m;
}
bool look4(Id n[],int d,int m){
	bool p=false;
	for(int i=0;i<m;i++){
		if(n[i].dni == d){
			p=true;
	}	}
	return p;
}

/*Funcion que, dado un vector de personas y una posici ´ on´ p del vector, desplace
 * una posicion a la derecha a todos los elementos del vector cuya posici ´ on sea igual ´
 * o mayor que p.*/

void hole(Id id[],int n,int size){
	size++;
	for(int i=size;i>n-1;i--){
		id[i]=id[i-1];
	}
}
/*Funcion que, dado un vector de personas y una posici ´ on´ p del vector, desplace
 * una posicion a la izquierda a todos los elementos del vector cuya posici ´ on sea ´
 * mayor que p.*/

void rm(Id id[],int n,int size){
	size--;
	for(int i=n;i<size;i++){
		id[i]=id[i+1];
	}
}

/*Funcion que, dado un vector de personas, muestre en la salida est ´ andar su con- ´
 * tenido.*/

void showall(Id n[],int size){
	for(int i=0;i<size;i++){
		cout << "Nombre: " << n[i].name << "\nEdad: " << n[i].age << "\nDNI: " << n[i].dni << "\n";
	}
}

/*Funcion que lea de la entrada est ´ andar, y devuelva, los datos de una persona. El ´
 * rango de edades admitido es: [0,150].*/

Id entry(Id n[]){
	Id newb;
	cout << "Introduce nombre,dni y edad\n";
	getline(cin>>ws,newb.name);
	cin >> newb.dni;
	do{cin >> newb.age;}while(newb.age > 150 || newb.age <0);
	return newb;
}

/*Introducir una nueva persona. Sugerencia: utilice las dos primeras funciones. Dada
 * una nueva persona utilice la primera funcion para comprobar si ya est ´ a en ´
 * el vector. En caso de que ya este rechace su introducci ´ on. En el caso de que no ´
 * este cree un hueco en el vector para ella—con la segunda funci ´ on—e ins ´ ertela en ´
 * la posicion correspondiente. ´
 * Eliminar una persona. Sugerencia: utilice la primera funcion para localizar su ´
 * posicion en el vector—si es que est ´ a—y la tercera funci ´ on para suprimirla. ´
 * Mostrar el contenido del vector.*/



int main(){
	Id id[200]={{"juan",100,16},{"pedro",120,18},{"carlos",150,17}};
	int size=3;
	int select=5;
	while(select!=4){
		cout << "1-Introducir nueva persona.\n" << "2-Eliminar una persona.\n" << "3-Mostrar todo.\n" << "4-Salir.\n";
		cin >> select;
		if(select==1){
			Id add = entry(id);
			if(look4(id,add.dni,size)==false){
				int pos=check(id,add.dni,size);
				hole(id,pos,size);
				size++;
				id[pos]=add;
			}
		}
		if(select==2){
			cout << "Introduce el dni del quien quieres eliminar:\n";
			int dni,pos;
			cin >> dni;
			for(int i=0;i<size;i++){
				if(dni==id[i].dni){
					pos=i;
				}
			}
			rm(id,pos,size);
			size--;
			cout << size;
		}
		if(select==3){
			showall(id,size);
		}
		if(select==4){
			cout << "Adios :)\n\n\n(pulse cualquier tecla para salir)\n";
			getchar();
			getchar();

		}




	}

}


