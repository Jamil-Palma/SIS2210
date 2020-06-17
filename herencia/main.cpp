#include "producto.cpp"
int main(){
	hijo objeto;
	objeto.ver();

	cout<< "____" << endl;
	char a[20]; cin >> a;
	float b; cin >> b;
	int c; cin >> c;
	hijo objeto_2(a,b,c);
	objeto_2.ver(); 
	return 0;
}

