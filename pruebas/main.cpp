#include "reloj.cpp"
int main(){
	Reloj A = Reloj(23,59,59);
	Reloj B(9,55,10);
	A.mostrar(5);
	B.alarma(12,30,0);
	return 0;
}