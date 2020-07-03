#include <stdio.h>
struct tipoPessoa {
    char nome[80];
    struct tipoData {
        int dia;
        int mes;
        int ano;
    } dtNascimento;
};

struct tipoPessoa separaInfo(char nome[80], int dt_nascimento){
    struct tipoPessoa pessoa;
    int i;
    for (i = 0; nome[i] != '\0' ; i++)
        pessoa.nome[i] = nome[i];
    pessoa.nome[i] = '\0';
    pessoa.dtNascimento.dia = dt_nascimento % 100;
    pessoa.dtNascimento.mes = (dt_nascimento / 100) % 100;
    pessoa.dtNascimento.ano = dt_nascimento / 10000;

    return pessoa;
}

// int main(int argc, char const *argv[])
// {
//     struct tipoPessoa x;
//     char nome[80];
//     int data;
//     x = separaInfo("Abigail Moreira da Silva", 19970229);
//     printf("%s\n", x.nome);
//     printf("%02d\n", x.dtNascimento.dia);
//     printf("%02d\n", x.dtNascimento.mes);
//     printf("%02d\n", x.dtNascimento.ano);
//     return 0;
// }
