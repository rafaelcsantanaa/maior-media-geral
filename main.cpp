///Cadastro de aluno, e mostra a maior media do aluno
#include <iostream>
using namespace std;
struct alunos {
char matricula[10];
char nome[50];
float nota[3];
};
int main(){
struct alunos a[3];
int i,nota, maiormediageral_indice;
float mediageral[3], maiormediageral=0;
cout <<"\n\t\t*#*#*#CADASTRO DO ALUNO*#*#*\n\n";
for(i=0; i<3; i++){
cout <<"\n\nDigite a matricula do aluno "<<i+1<< ":\t";
cin>> a[i].matricula;
cout <<"Nome do Aluno "<<i+1<<": ";
cin>>a[i].nome;
cout <<"Nota 1: ";
cin>>a[i].nota[0];
cout <<"Nota 2: ";
cin>>a[i].nota[1];
cout <<"Nota 3: ";
cin>>a[i].nota[2];
mediageral[i] = a[i].nota[0]+a[i].nota[1]+a[i].nota[2];
if(mediageral[i]>maiormediageral){
maiormediageral = mediageral[i];
maiormediageral_indice = i;
}
}
cout <<"\n\tAluno com maior media: "<<a[maiormediageral_indice].nome;
return 0;
}
