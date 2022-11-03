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
void insertion_sort(cliente vetor2[],int tam){
	int pivo1,pivo2,x;
	for(int i=1; i<tam; i++){
		pivo1=vetor2[i].distancia_cliente;
		pivo2=vetor2[i].pos_cliente;
		x=i-1;
		while(x>=0 and pivo1<vetor2[x].distancia_cliente){
			vetor2[x+1].distancia_cliente=vetor2[x].distancia_cliente;
			vetor2[x+1].pos_cliente=vetor2[x].pos_cliente;
			x--;
		}
		vetor2[x+1].distancia_cliente=pivo1;
		vetor2[x+1].pos_cliente=pivo2;
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
	insertion_sort(vetor2,total_clientes);
	float soma=0;
	
	for (int i=0; i<clientes_atendidos; i++){
		soma+=vetor[vetor2[i].pos_cliente].valor_pizza;
	}
	cout<<soma<<endl;
	
	return 0;
}
