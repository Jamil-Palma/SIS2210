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
