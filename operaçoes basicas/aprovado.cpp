#include<iostream>
using namespace std;
int main(){

float nota1, nota2, nota3, nota4;
cin >> nota1 >> nota2 >> nota3 >> nota4;
    
float soma = nota1 + nota2 + nota3 + nota4;
    
float media = soma/4;
    
cout << "Média: " << media << endl;
    
bool aprovado;
    
if( media >= 6 )
    aprovado = true;
else
    aprovado = false;
    
if( !(aprovado) and (media < 5) )
    cout << "Aluno reprovado, média abaixo de 5. Leve a sério seus estudos." << endl;
else if ( !(aprovado) and (media >= 5) and (media < 6) )
    cout << "Aluno reprovado, porém foi quase. Continue se esforçando e conseguirá." << endl;
else if ( (aprovado) and (media == 6) )
    cout << "Aluno aprovado, porém na média. Cuidado, dê mais atenção aos estudos." << endl;
else if ( (aprovado) and (media > 6) and (media < 10) )
    cout << "Aluno aprovado, parábens. Ainda não foi 10, você consegue melhorar." << endl;
else
    cout << "Aluno aprovado, parábens. Você atingiu a nota máxima, incrível." << endl;




}
