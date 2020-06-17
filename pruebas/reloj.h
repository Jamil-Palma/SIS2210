///Clase Reloj
class Reloj{
private://parametros
	int hora, minuto, segundo;
public://funciones
	Reloj();//constructor
	Reloj(int,int,int);
	void mostrar(int);///nos muestra nuestra hora actual por x segundos
	void alarma(int,int,int);///Nos indica cuanto falta para que suene la alarma
	Reloj operator+(Reloj);///sumamos 2 horas

	int getHora();
	void setHora(int);
	int getMinuto();
	void setMinuto(int);
	int getSegundo();
	void setSegundo(int);
};