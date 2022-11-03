#include <iostream>
#include <fstream>
using namespace std;

double calcula_num_aureo ( double num, ofstream& arquivo){
	if( num == 1){
		arquivo << num << endl;
		return 1;
	}
	else{
		double retorno = 1+(1/calcula_num_aureo(num-1,arquivo));
		arquivo << retorno << endl;
		return retorno;
	}
}
int main (){
	double num;
	
	cin >> num;
	
	ofstream arquivo ("phi.txt");
	
	double num_aureo = calcula_num_aureo (num,arquivo);
	
	cout << num_aureo << endl;
	
	arquivo.close();
	
	return 0;
}
