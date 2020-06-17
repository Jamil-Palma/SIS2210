#include "reloj.h"
#include <iostream>
using namespace std;
///[tipo de retorno] [clase a la que pertenece]::[nombre de la funcion]
Reloj::Reloj(){
	hora = 0;
	minuto = 0;
	segundo =0;
}
Reloj::Reloj(int h,int m,int s){
	hora = h;
	minuto = m;
	segundo = s;	
}
void Reloj::mostrar(int tiempo){
	Reloj t(hora,minuto,segundo);
	for(int i = 0; i < tiempo; i++){
		cout<<"Son las: "<< t.getHora() << ":" <<
		t.getMinuto() << ":" << t.getSegundo() << endl;
		t = t + (Reloj(0,0,1));
	}
}
///Nos indica cuanto falta para que suene nuestra alarma
void Reloj::alarma(int h,int m,int s){
	///convertir todo a segundos
	int hora_actual = hora*3600 + minuto*60 + segundo;
	int hora_alarma = h*3600 + m*60 + s;
	int diferencia = hora_alarma - hora_actual;
	///20 -> 7 => 11 horas
	int hora_ans, minuto_ans, segundo_ans;
	if(diferencia < 0)
		diferencia = hora_alarma + 24*3600 - hora_actual;

	hora_ans = diferencia/3600;
	diferencia = diferencia%3600;

	minuto_ans = diferencia/60;
	diferencia %= 60;

	segundo_ans = diferencia;
	diferencia = 0;

	cout << "La alarma sonara en: ";
	cout << hora_ans << " horas ";
	cout << minuto_ans << " minutos y ";
	cout << segundo_ans << " segundos." << endl;
}

Reloj Reloj::operator+(Reloj B){
	int h,m,s;
	h = B.getHora();
	m = B.getMinuto();
	s = B.getSegundo();

	s = segundo + s;
	if(s >= 60){
		s -= 60;
		m++;
	}

	m = minuto + m;
	if(m >= 60){
		m -= 60;
		h++;
	}

	h = hora + h;
	if(h >= 24){
		h -= 24;
	}
	Reloj respuesta(h,m,s);
	return respuesta;
}

int Reloj::getHora(){
	return hora;
}
void Reloj::setHora(int h){
	hora = h;
}

int Reloj::getMinuto(){
	return minuto;
}
void Reloj::setMinuto(int m){
	minuto = m;
}

int Reloj::getSegundo(){
	return segundo;
}
void Reloj::setSegundo(int segundo){
	this->segundo = segundo;
}









































