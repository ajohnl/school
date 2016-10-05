//Ejercicio 12
#include <iostream>
#include <stdio.h>

int main(){
using std::cout;
using std::cin;
cout << "Introduce 3 numeros separados por espacios:\n";
int a,b,c;
cin >> a >> b >> c;
cout << "Ahora introduce un cuarto numero:\n";
int d;
cin >> d;

if (d==a || d==b || d==c){cout << d << " coincide con uno de los anteriormente mencionados.\n";}
else{cout << d << " no coincide con ninguno de los numeros anteriormente mencionados.\n";return 0;}}
