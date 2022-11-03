#include <iostream>
#include <fstream>
using namespace std;
int main() {
	string nome_arquivo;
	
	cin >> nome_arquivo;
	
	ifstream arquivo (nome_arquivo.c_str());
	
	char caractere[1];
	
	char alfabeto[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	
	int i;
	
	ofstream arquivo_cifrado("cifrado");
	
	while (arquivo.read(caractere,1)){
		i=0;
		while (i < 23){
			if( caractere[0] == 'X'){
				caractere[0] = 'A';
				i=23;
			}
			else if( caractere[0] == 'Y'){
				caractere[0] = 'B';
				i=23;
			}
			else if( caractere[0] == 'Z'){
				caractere[0] = 'C';
				i=23;
			}
			else if( caractere[0] == alfabeto[i]){
				caractere[0] = alfabeto[i+=3];
				i=23;
			}
			i++;
		}
		arquivo_cifrado << caractere[0];
	}
	arquivo.close();
	arquivo_cifrado.close();
	return 0;
}
