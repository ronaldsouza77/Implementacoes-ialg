#include <iostream>
#include <fstream>
using namespace std;
int main() {
	string nome_arquivo;
	
	cin >> nome_arquivo;
	
	ifstream arquivo (nome_arquivo.c_str());
	
	char caractere[1];
	
	char alfabeto[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	
	int i,x;
	
	ofstream arquivo_cifrado("cifrado.txt");
	
	while (arquivo.read(caractere,1)){
		i=0;
		x=25;
		while (i < 26){
			if( caractere[0] == alfabeto[i]){
				caractere[0] = alfabeto[x];
				i=26;
			}
			i++;
			x--;
		}
		arquivo_cifrado << caractere[0];
	}
	arquivo.close();
	arquivo_cifrado.close();
	return 0;
}
