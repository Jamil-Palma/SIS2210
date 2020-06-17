#include<iostream>
#include<string.h>
struct fecha{
	int dia,mes,anio;
	fecha();
	fecha(int,int,int);
	void ver();
	int getDia();
	void setDia(int);

	int getMes();
	void setMes(int);

	int getAnio();
	void setAnio(int);
};
class persona{
private:
	int ci;
	char nombre[30];
	float altura;
	char nacionalidad[30];
	char gen;
	fecha f_nac;
public:
	persona();
	persona(int,char[],float,char[],char,int,int,int);
	void ver();
	void ver_nacionalidad(char[]);
	void ver_altura(float);

	int getCi();
	void setCi(int);

	char* getNombre();
	void setNombre(char[]);

	float getAltura();
	void setAltura(float);

	char* getNacionalidad();
	void setNacionalidad(char[]);

	char getGen();
	void setGen(char);

	fecha getf_nac();
	void setf_nac(int,int,int);

	void que_edad(fecha);
};