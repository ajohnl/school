#include <iostream>
#include <string>
using namespace std;
struct Book(string title,int code,float price);
struct Client(string name, int code);
struct Sale(int client, int book);

/*Dado un codigo de libro obtener cu ´ antos libros con ese c ´ odigo se han vendido. */
int sales(Sale m[],int n,int tsale){
	int x=0;
	for(int i=0;i<tsale;i++){
		if(m[i].book == n){x++;}
	return x;
}
/*Dado un codigo de libro, obtener su posici ´ on en el vector de libros. */
int position(Book b[],int c,int tbooks){
	int x;
	for(int i=0;i<tbooks;i++){
		if(c==b[i].code){x=i;break;}
	return x;
}
/*Obtener el t´ıtulo del libro mas vendido*/
string bestseller(Sale s[],Book b[],tsale,tbooks){
	struct Times(string title,int times);
	Times books[1000];
	
	for(int i=0;i<tbooks;i++){
		books[i].title=b[i].title;
		books[i].times=0;
		for(int j=0;j<tsale;j++){
			if(b[i].code==s[j].book){
				books[i].times++;
			}
		}
	}
	int max=books[0].times
	for(int i=1;i<tbooks;i++){
		if(books[i].times<max){max=books[i].times;}
	string x;
	}
	for(int i=0;i<tbooks;i++){
		if(books[i].times==max){
			x=books[i].title;
		}
	}
	return x;
}



/*Obtener el t´ıtulo del libro que mas dinero ha recaudado.*/
string mostmoney(Book b[],Sale s[],tbook,tsale){
	struct Money(string title,int code,float money);
	Money books[1000];
	for(int i=0;i<tbook;i++){
		books[i].title=b[i].title;
		books[i].code=b[i].code;
		for(int j=0;j<tbook;j++){
			if(books[i].code==s[j]){books[i].money=books[i].money+b[i].price;}
		}
	}
	float max=0;
	string maximus;
	for(int i=0;i<tbooks;i++){
		if(books[i].money>max){max=books[i].money;maximus=books[i].title;}
	}
	return maximus;
}

/*Dado un codigo de cliente obtener un vector con los t ´ ´ıtulos de los libros que ha
 * comprado.*/

void(Client c[],Sale s[],Book b[],tbook,tclient,tsale){
	string books[1000];
	int num=0;
	int code;
	for(int i=0;i<tclient;i++){
		for(int j=0;j<tsale;j++){
			if(c[i].code==s[j].client){
				books[num]=s[j].book;
				num++;
			}
		}
	}
	for(int i=0;i<num;i++){
		for(int i=0;i<tbook,j++){
			if(book[i]==b[j].code){
				book[i]=b[j].code;
			}
		}
	}
}
