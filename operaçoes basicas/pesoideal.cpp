#include<iostream>
using namespace std;
int main(){
    char sexo;
    float altura,peso_ideal;
    cin>>sexo; 
    cin>>altura;
    if (sexo=='M'){
        peso_ideal=(72.7*altura)-58;
        cout<<peso_ideal<<endl;
    }
    if (sexo=='F'){
    peso_ideal=(62.1*altura)-44.7;
    cout<<peso_ideal<<endl;
    }



return 0;
}
