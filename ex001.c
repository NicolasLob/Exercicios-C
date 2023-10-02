/*
Faça um programa que solicite a idade de uma pessoa. Em seguida, o programa
deve exibir uma mensagem informando se a pessoa é maior de idade. Utilize o 
tipo de dado mais conveniente e trate dados inválidos, tais como valor 
negativo.
*/
#include<stdio.h>
int main () {
	int idade;
	    printf("Informe sua idade: \n");
        scanf("%d", &idade);
	if (idade >= 18) 
		printf("Você é maior de idade.");
	else if  (idade < 18)
		printf("Você não é maior de idade.");
}
    