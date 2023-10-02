// ConsoleApplication2.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i = 0,c=0;
	char nome[10][10]={0,0,0,0,0}; // Define o numero de espaços no vetor e o numero de carateres

	for (i = 0; i < 5;i++) {
        fflush(stdin);
		printf("Insere nome: ");
		scanf("%s", &nome[i]);
		fflush(stdin);
		if (nome[c]=='a'){
            printf("O Nome aa Existe no vetor");
	}

	}

	for (c=0;c<5;c++){
        printf("\n%s",nome[c]);




	}

	}

