///clase reloj
///hora minuto y segundo
class Reloj{
private: ///atributos
	int hora,minuto,segundo;
public:
	Reloj();
	Reloj(int,int,int);
	void mostrar(int);
	void alarma(int,int,int); ///Nos indica cuanto falta para que suene nuestra alarma
	Reloj operator+(Reloj); ///Sumaremos 2 horas

	int getHora();///recuperar valor
	void setHora(int);///asignar un valor;
	int getMinuto();
	void setMinuto(int);
	int getSegundo();
	void setSegundo(int);	
};
