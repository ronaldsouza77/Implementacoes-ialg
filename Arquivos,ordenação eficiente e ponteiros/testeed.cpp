#include <iostream>
#include <cmath>

using namespace std;

/*int main(){
    int vetor[5]={0,1,2,3,4};
    
    int a = 8;
    char b = 'x';
    float c = 7;
    double d = 13.1;
    
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "d: " << d << endl;
    
    cout << "MUITA CACA NESSA HORA!" << endl;

    vetor[-3] = 163;
    vetor[-2] = 198;
    vetor[-1] = 145;
    vetor[6] = 125;
    
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "d: " << d << endl;    

    return 0;	
}*/

/*int main(){
    int a=20;
    cout << &a << endl;

    int v[5];
    cout << v << endl;
    cout << &v << endl;
    cout << &v[3]<< endl;
		
	return 0;	
}*/

/*int main(){
        cout << "char " << sizeof(char) << endl;
        cout << "short " << sizeof(short) << endl;
        cout << "int " << sizeof(int) << endl;
        cout << "long " << sizeof(long) << endl;
        cout << "long long " << sizeof(long long) << endl;
        
        cout << "float " << sizeof(float) << endl;
        cout << "double " << sizeof(double) << endl;
        cout << "long double " << sizeof(long double) << endl;

        cout << "bool " << sizeof(bool) << endl;


        cout << "bool " << sizeof(int*) << endl;
        cout << "bool " << sizeof(string) << endl;
                
        return 0;
}*/

/*int main(){
    int aux;
    int *auxPtr;

    cout << "TRECHO PERIGOSO" << endl;
    cout << "Valor de aux:" << aux << endl;
    cout << "Endereço de aux:" << &aux << endl;
    cout << "Valor de auxPtr:" << auxPtr << endl;
    cout << "Valor apontado por auxPtr:" << *auxPtr << endl;

    aux = 7;
    auxPtr = &aux;

    cout << "TRECHO SEGURO" << endl;
    cout << "Valor de aux:" << aux << endl;
    cout << "Endereço de aux:" << &aux << endl;
    cout << "Valor de auxPtr:" << auxPtr << endl;
    cout << "Valor apontado por auxPtr:" << *auxPtr << endl;
	
    return 0;	
}*/

/*int  main() {
    int vet[] = {4,9,12,30,60,100}; 
    int* ptr;       
    ptr = vet;       
    for(int i = 0 ; i < 6 ; i++) {
        cout << *ptr++ << endl;
    }
    return 0;
}*/

/*int main ( int argc, char* argv[]){
	for ( int i=0; i<argc; i++){
		cout<<i<<":"<<argv[i]<<endl;
	}
	return 0;
}*/
int main(){
	int capacidadeMaxima;
	
	cin >> capacidadeMaxima;
	int capacidade_redimensionda = ceil(capacidadeMaxima * 0.2);
	 
	capacidadeMaxima += capacidade_redimensionda;
	cout << capacidadeMaxima << endl;

	return 0;
}







