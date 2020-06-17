#include "persona.cpp"
int main(){
	persona p1;
	p1.ver();
	char a[] = {'a','b','c'};
	char b[] = {'b','o','l','i','v','i','a'};
	persona p2(12345,(char*)("abc"),1.80,(char*)("bolivia"),'M',30,12,2001);
	p2.ver();

	char mi_vector[30];
	char *y;
	y = p2.getNacionalidad();
	cout << y << endl;
	for(int i = 0; i < 30; i++)
		mi_vector[i] = *(y+i);
	cout << mi_vector << endl;
	mi_vector[ strlen(y) ] = 0;

	cout << mi_vector << endl;
	

	/// hoy es: 4 de junio de 2020
	/// 4/6/2020
	fecha hoy(4,6,2020);
	p2.que_edad(hoy);
	return 0;
}