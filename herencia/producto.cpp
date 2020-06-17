#include "producto.h"
padre::padre(){
	for(int i = 0; i < 20; i++)
		nombre[i] = 0; ///fin de linea
	precio = 0;
}
padre::padre(char info[],float _precio){
	for(int i = 0; i < strlen(info); i++)
		nombre[i] = info[i];
	nombre[ strlen(info) ] = 0;
	precio = _precio;
}
void padre::ver(){
	cout<<"nombre: "<< nombre<<endl;
	cout<<"precio: "<<precio<<endl;
}

hijo::hijo(){
	 numero = 0;
}
hijo::hijo(char a[],float b,int c):padre(a,b){
	numero = c;
}
void hijo::ver(){
	padre::ver();
	cout << "numero: "<< numero<<endl;
}
