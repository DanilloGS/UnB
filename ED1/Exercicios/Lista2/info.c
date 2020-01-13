#include<stdlib.h>
#include<stdio.h>
struct tipoPessoa{
    char nome[80];
    struct tipoData{
        int dia;
        int mes;
        int ano;
    }dtNascimento;
};

struct tipoPessoa separaInfo(char nome[80], int dt_nascimento){
    struct tipoPessoa dado;
    for (int i = 0; nome[i]!="\0"; i++){
        dado.nome[i] = nome[i];
    }
    dado.dtNascimento.dia = dt_nascimento%100;
    dado.dtNascimento.mes = (dt_nascimento/100)%100;
    dado.dtNascimento.ano = dt_nascimento/10000;    

    return dado;
}
int main(int argc, char const *argv[])
{
    struct tipoPessoa teste;
    char nome[80];
    int data;
    scanf("%s", nome);
    scanf("%d", &data);
    teste = separaInfo(nome, data);
    printf("%s\n", teste.nome);
    printf("%d\n", teste.dtNascimento.dia);
    printf("%d\n", teste.dtNascimento.mes);
    printf("%d\n", teste.dtNascimento.ano);
    return 0;
}
