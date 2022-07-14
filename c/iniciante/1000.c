//beecrowd | 1000
//Hello World!
//https://www.beecrowd.com.br/judge/pt/problems/view/1000

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
    printf("Hello World!\n");
    //\n é para quebrar uma linha, sem isso, a apresentação fica errada - segundo o site
    system("pause");
    //system("pause"); é necessário apenas para o sublime text, não para o site.
}