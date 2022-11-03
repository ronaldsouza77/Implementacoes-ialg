#include <iostream>
#include <cmath>
using namespace std;

struct dados_cliente{
	string nome;
	float coordenada_x,coordenada_y,valor_pizza;
};
struct cliente{
	int pos_cliente,distancia_cliente;
};
float calculadistancia(cliente vetor2[],int total_clientes,float coordenada_x_pizzaria,float coordenada_y_pizzaria,float coordenada_x,float coordenada_y){
	float distancia= sqrt(((coordenada_x_pizzaria-coordenada_x)*(coordenada_x_pizzaria-coordenada_x))+((coordenada_y_pizzaria-coordenada_y)*(coordenada_y_pizzaria-coordenada_y)));
	return distancia;
}
void shell_sort(cliente vetor[], int size) {
	int gaps[9] = {1, 4, 10, 23, 57, 132, 301, 701, 1750};
	int pos_gap = 8;
    
	while (gaps[pos_gap] > size) {
		pos_gap--;
	}    
	int value1,value2;
	int j;
    
	while ( pos_gap >= 0 ) {
		int gap = gaps[pos_gap];

		for (int i = gap; i < size; i++) {
			value1 = vetor[i].distancia_cliente;
			value2 = vetor[i].pos_cliente;
			j = i;
			while (j >= gap and value1 < vetor[j - gap].distancia_cliente) {
				vetor[j].distancia_cliente = vetor[j - gap].distancia_cliente;
				vetor[j].pos_cliente = vetor[j - gap].pos_cliente;
				j = j - gap;
			}
			vetor[j].distancia_cliente = value1;
			vetor[j].pos_cliente = value2;
		}

		pos_gap--;
	}
}
int main(){
	int clientes_atendidos,total_clientes;
	
	float coordenada_x_pizzaria,coordenada_y_pizzaria;
	
	cin>>clientes_atendidos;
	cin>> coordenada_x_pizzaria;
	cin>> coordenada_y_pizzaria;
	cin>>total_clientes;
	
	dados_cliente vetor[total_clientes];
	
	for(int i=0; i<total_clientes; i++){
		cin>>vetor[i].nome;
		cin>>vetor[i].coordenada_x;
		cin>>vetor[i].coordenada_y;
		cin>>vetor[i].valor_pizza;
	}
	cliente vetor2[total_clientes];
	float distancia;
	int cont=0;
	
	for (int i=0; i<total_clientes; i++){
		distancia=calculadistancia(vetor2,total_clientes,coordenada_x_pizzaria,coordenada_y_pizzaria,vetor[i].coordenada_x,vetor[i].coordenada_y);
		vetor2[i].distancia_cliente=distancia;
		vetor2[i].pos_cliente=cont++;
	}
	shell_sort(vetor2,total_clientes);
	
	float soma=0;
	
	for (int i=0; i<clientes_atendidos; i++){
		soma+=vetor[vetor2[i].pos_cliente].valor_pizza;
	}
	cout<<soma<<endl;
	
	return 0;
}
