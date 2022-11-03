#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ifstream arq("numeros");
	
	int dados;
	
	ofstream arq2("pares");
	ofstream arq3("impares");
	
	while(arq>>dados){
		if (dados%2==0){
			 arq2<<dados<<" ";
		}
		else { arq3<<dados<<" ";
		}
	}
	arq.close();
	arq2.close();
	arq3.close();
	
	return 0;
}
