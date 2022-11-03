#include <iostream>
#include <fstream>

using namespace std;

int main (){
	ifstream arquivo("entrada.txt");
	
	int i=0,vetor[100];
	
	while (arquivo >> vetor[i]){
		i++;
	}
	ofstream arquivo_2("saida.txt");
	
	for(int x=i-1; x >= 0; x--){
		arquivo_2 << vetor[x] <<" ";
	}
	arquivo.close();
	arquivo_2.close();
	
	return 0;
}
