//beecrowd | 1001
//Extremamente Básico
//https://www.beecrowd.com.br/judge/pt/problems/view/1001

//bibliotecas:

#include <stdio.h> 
//standard input-output header
//funções de entrada e saída de dados.
#include <stdlib.h>
//standard library header
//funções de alocação de memória, controle de processos, conversões etc.

//-----------------------------------------------------------------------

void main()
//void significa "vazio"
//quer dizer que a função principal main(), nesse caso, não precisa retornar nenhum valor
{
    int A, B, X;
    scanf("%d", &A); //ler o valor digitado e colocar na variável A, do tipo int -- %d
    scanf("%d", &B); //perceba que é necessário colocar o endereço da variável -- &
    X = A + B;
    printf("X = %d\n", X); //printar a variável X do tipo int

    system("pause");
    //system("pause"); é necessário apenas para o sublime text, não para o site.
 }