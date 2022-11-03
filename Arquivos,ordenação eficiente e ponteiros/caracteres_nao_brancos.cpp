#include <iostream>
#include <fstream>

using namespace std;

int main (){
	ifstream arquivo("Meu_Arquivo.txt");
	
	char leitura;
	
	int cont=0;
	
	while (arquivo >> leitura){
		if (leitura != ' ') cont++;
	}
	cout << cont << endl;
	
	arquivo.close();
	
	return 0;
}
