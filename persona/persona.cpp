#include "persona.h"
///tipo_retorno clase::nombre_funcion
using namespace std;

fecha::fecha(){
	dia = 0; mes = 0; anio=0;
}
fecha::fecha(int a,int b,int c){
	dia = a; mes = b; anio=c;	
}
void fecha::ver(){
	cout<<" "<<dia<<"/"<<mes<<"/"<<anio<<" ";
}
int fecha::getDia(){
	return dia;
}
void fecha::setDia(int x){
	dia = x;
}

int fecha::getMes(){
	return mes;
}
void fecha::setMes(int x){
	mes = x;
}

int fecha::getAnio(){
	return anio;
}
void fecha::setAnio(int x){
	anio = x;
}

persona::persona(){
	ci =0; nombre[0] = 0; altura = 0;
	nacionalidad[0] = 0; gen='.';
	f_nac = fecha(0,0,0);
}
persona::persona(int a,char b[],float c,char d[],char e,int f,int g,int h){
	ci = a;
	for(int i = 0; i < strlen(b); i++)
		nombre[i] = b[i]; 
	nombre[ strlen(b) ] = 0;
	altura = c;
	for(int i = 0; i < strlen(d); i++)
		nacionalidad[i] = d[i];
	nacionalidad[ strlen(d) ] = 0; 
	gen=e;
	f_nac = fecha(f,g,h);
}
bool compara(char a[],char b[]){
	int n = strlen(a);
	bool control = true;
	for(int i = 0; i < n; i++)
		if(a[i] != b[i])
			control = false;
	return control;
}
void persona::ver(){
	cout << "ci:" <<ci << endl;
	cout << "nombre:" << nombre << endl;
	cout << "altura:" <<altura << endl;
	cout << "nacionalidad:" <<nacionalidad << endl;
	cout << "genero:" << gen << endl;
	cout << "fecha de nacimiento:";  f_nac.ver(); cout<< endl;
	cout << "*****************" << endl;
}
void persona::ver_nacionalidad(char x[]){
	if( compara(nacionalidad, x) ){
		ver();
	}
	else
		cout << "No pertenece a esa nacionalidad" << endl; 
}
void persona::ver_altura(float x){ ///si la persona tiene una altura minima de x
	if( altura >= x ){
		ver();
	}
	else
		cout << "Tiene una altura mas baja" << endl; 	
}

int persona::getCi(){
	return ci;
}
void persona::setCi(int x){
	ci = x;
}

char* persona::getNombre(){
	return nombre;
}
void persona::setNombre(char x[]){
	int n = strlen(x);
	for(int i = 0; i < n; i++)
		nombre[i] = x[i];
	nombre[n] = 0;
}

float persona::getAltura(){
	return altura;
}
void persona::setAltura(float x){
	altura = x;
}

char* persona::getNacionalidad(){
	return nacionalidad;
}
void persona::setNacionalidad(char x[]){
	int n = strlen(x);
	for(int i = 0; i < n; i++)
		nacionalidad[i] = x[i];
	nacionalidad[n] = 0;
}

char persona::getGen(){
	return gen;
}
void persona::setGen(char x){
	gen = x;
}

fecha persona::getf_nac(){
	return f_nac;
}
void persona::setf_nac(int a,int b,int c){
	//f_nac.dia = a;
	f_nac.setDia(a);
	f_nac.setMes(b);
	f_nac.setAnio(c);
}

void persona::que_edad(fecha hoy){
	int h_d = hoy.getDia();
	int h_m = hoy.getMes();//a tiempo de dias
	int h_a = hoy.getAnio();

	int dias_1;//nuestra_persona_dias = 0;
	int dias_2;//fecha_actual_dias = 0;

	int dias_mes[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	dias_1 = f_nac.getDia();
	int lim = f_nac.getMes();
	for(int i = 0; i < lim; i++)
		dias_1 += dias_mes[i];

	dias_2 = h_d;
	for(int i = 0; i < h_m; i++)
		dias_2 += dias_mes[i];

	if(f_nac.getAnio()%4 == 0 && f_nac.getAnio()%400 != 0){
		if(f_nac.getMes() >= 3)
			dias_1++;
	}
	if(h_a%4 == 0 && h_a%400 != 0){
		if(h_m >= 3)
			dias_2++;
	}
	int respuesta = h_a - f_nac.getAnio();
	if(dias_1 > dias_2)
		respuesta--;
	cout << "Tienes " << respuesta << " anios" << endl;
}


///  ----*------------hoy---
















