#include <stdio.h>

//criei uma função inteira e chamei ela de "adicione", e no parâmetro passei duas variáveis "a" e "b" do tipo inteiro

int adicione (int a, int b) {

    return a + b; //essa função vai retornar a soma de "a" e "b"

}

//criei uma função "subtr" e no parâmetro passei duas variáveis "a" e "b" do tipo inteiro

int subtracao (int a, int b) {

return a - b;//essa função vai retornar a subtração de "a" e "b"

}

// criei uma função e no parâmetro declarei um ponteiro para uma função, chamado "result" e duas variáveis inteiras "a" e "b"

int calc (int (*result)(int, int), int a, int b) {

return (*result)(a, b);// a cada vez que essa função for chamada, ela vai retornar a operação pedida de "a" e "b"

}

int main(void) {

int (*ptr)(int, int); // declarei um ponteiro para uma função

    ptr = &adicione; // o ponteiro está apontado para a função "adicione"

    ptr = &subtracao; // o ponteiro está apontado para a função "subtracao"

int n1add, n2add, n1sbtr, n2sbtr;

    printf("Digite 2 números para realizar a soma:\t");

    scanf("%d %d",&n1add, &n2add);

    printf("A soma é: %d\n", calc(adicione, n1add, n2add)); // chamei a função "calc" e passei a função "adicione" e os números lidos como um argumento para ela, e está mostrando na tela o resultado da soma de "n1add" + "n2add"
    
    printf("\nDigite 2 números para realizar a subtração:\t");

    scanf("%d %d",&n1sbtr, &n2sbtr);

    printf("A diferença é: %d\n", calc(subtracao, n1sbtr, n2sbtr)); // chamei a função "calc" e passei a função "subtr" e os números lidos como um argumento para ela, e está mostrando na tela o resultado da subtração de "n1sbtr" - "n2sbtr"

return 0;

}
