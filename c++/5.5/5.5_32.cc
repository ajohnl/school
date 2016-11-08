/*Defina una estructura que indique el tiempo empleado por un ciclista en una etapa. La
estructura debe tener tres campos: horas, minutos y segundos. Escriba un programa
que dado un vector con los tiempos que un ciclista ha empleado en cada etapa calcule
el tiempo total empleado en correr todas las etapas.*/

#include <iostream>
#include <stdio.h>

int main(){using std::cin;using std::cout;
	struct trip{
		int h;
		int min;
		int sec;
	};
	cout << "Introduce numero de etapas:\n";
	int laps;
	cin >> laps;
	trip lap[laps];
	cout << "[HORAS] [MINUTOS] [SEGUNDOS]:\n";
	for(int i=0;i<laps;i++){
		cout << "Introduce tiempo " << i+1 << " :\n";
		cin >> lap[i].h >> lap[i].min >> lap[i].sec;
		lap[i].sec = lap[i].sec + (lap[i].h * 3600) + (lap[i].min * 60);
	}
	int totalsec=0;
	for(int i=0;i<laps;i++){
		totalsec = totalsec + lap[i].sec;
	}
	trip total;
	total.min = totalsec / 60;
	total.sec = totalsec % 60;
	total.h = total.min / 60;
	total.min = total.min % 60;
	
	cout <<  "\n" << total.h << " horas, "  << total.min << " minutos, " << total.sec << " segundos.\n";
	return 0;
}
