#include<iostream>
using namespace std;
struct NARRATIVA{
	char novela[100];///public
	char cuento[100];
	char mito[100];
	NARRATIVA(){
		novela[0] = 0;
		cuento[0] = 0;
		mito[0] = 0;
	}
};
struct LIRICA{
	char soneto[100];
	char oda[100];
	char romance[100];
	LIRICA(){
		soneto[0] = 0;
		oda[0] = 0;
		romance[0] = 0;
	}
};
struct LITERATURA{
	NARRATIVA narrativa;
	LIRICA lirica;
	struct DRAMA{
		bool tragedia;
		bool comedia;
		DRAMA(){
			tragedia = false;
			comedia = false;
		}
	} drama;
	char ensayo[200];
	LITERATURA(){
		ensayo[0] = 0;
	}
};
int preg_2(int n){
	cout << n << " ";
	if(n == 1)
		return 0;
	///n > 1
	if(n%2 == 0)//par
		return preg_2(n/2) + 1;
	else///impar
		return preg_2(n*3 + 1) + 1;
}
int main(){
	int pasos = preg_2(13);
	cout << endl << pasos << endl;
	LITERATURA x;
	cin >> x.narrativa.novela;
	cout << x.narrativa.novela << endl;
	return 0;
}