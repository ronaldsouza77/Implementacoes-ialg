#include <iostream>
using namespace std;
void apaga(int vetor[], int vetorNaoMultiplode3[], int& n, int& m){
    int cont=n, i;
    for(i=0; i<cont; i++){
        if(vetor[i]%3!=0){
            vetorNaoMultiplode3[m] = vetor[i];
            m++;
        }
        if(vetor[i]%3==0){
            n--;
        }
    }
}
int main(){
    int n, m = 0;

    cin>>n;

    int vetor[n], vetorNaoMultiplode3[m];


    for(int i=0; i<n; i++){
        cin>>vetor[i];
    }

    apaga(vetor, vetorNaoMultiplode3, n, m);

    for(int i=0; i<n; i++){
        cout<<vetorNaoMultiplode3[i]<<" ";
    }
    cout<<endl<<m<<endl;

    return 0;
}
