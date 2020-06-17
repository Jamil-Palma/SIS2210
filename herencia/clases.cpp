#include<iostream>
#include<string.h>
using namespace std;
///herencia
class padre{///productos
private:///atributos
	char nombre[20];
	float precio;
public:
	padre();
	padre(char[],float);
	void ver();
};

class hijo:public padre{
	private:///atributos
	int numero;
	public:
		hijo();
		hijo(char[],float,int);
		void ver();
};
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

int main(){
	hijo objeto;
	objeto.ver();

	cout<< "____" << endl;
	char a[20]; cin>>a;
	float b; cin>> b;
	int c; cin>>c;
	hijo objeto_2(a,b,c);
	objeto_2.ver(); 
	return 0;
}



























