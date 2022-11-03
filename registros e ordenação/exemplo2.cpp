#include <iostream>
using namespace std;
//declaração da struct

struct carro {
	int ano;
	string marca, cor;
};

void alterar (carro &c, int ano){
	c.ano=ano;
}

int main() {
	carro meuCarro; //tipo nome
	
	cin>>meuCarro.marca;
	cin>>meuCarro.cor>>meuCarro.ano;
	
	alterar(meuCarro, 1500);
	
	cout<<"Dados do carro "<<meuCarro.marca<<"\t"<<meuCarro.ano<<endl;
	
	//cout<<&meuCarro<<endl;
	
	//entrada de dados
	
	//saída de dados: acesso aos dados
	
 
	return 0;
}

