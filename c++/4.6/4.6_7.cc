/*7. Escriba un programa que tome cada 4 horas la temperatura exterior, leyendola 
durante un  perıodo  de  24  horas.  Es  decir,  debe  leer  6  temperaturas.  Calcule  la  temperatura
media del dıa, la temperatura mas alta y la mas baja.
*/







#include <iostream>
#include <stdio.h>

int main(){
        using std::cin;
        using std::cout;
        double init = 1;
        double temp;
        double totaltemp = 0;
	double tempmax, tempmin;
	cin >> temp;
	tempmax = temp;
	tempmin = temp;
        while (init <= 5){
                cin >> temp;
		if (temp < -273.15){cout << "Hace bastante frio, no?\n";}
		if (temp > tempmax){tempmax = temp;}
		if (temp < tempmin){tempmin = temp;}
                init++;
                totaltemp = totaltemp + temp;}
        cout << "Temperatura media: " << totaltemp / 6 << "º \nTemperatura maxima: " << tempmax << "º \nTemperatura minima: " << tempmin << "º\n";return 0;}
