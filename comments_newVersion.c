#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

#define ACEITO 1
#define REJEITADO 0
#define ESTADO_1 1
#define ESTADO_2 2
#define ESTADO_3 3
#define ESTADO_4 4
#define ESTADO_5 5

int main(int argc, char const *argv[]){
	setlocale(LC_ALL, "Portuguese");
	
	char string [100]; //Tamanho do vetor para 100 caracteres
	int i = 0; 
	
	printf("Coloque aqui a expressão a ser testada: "); //Entrada para o usuario
	scanf("%s", &string);
	
    char lex[strlen(string)];
    int foiAceito = ACEITO;
    int machineState = ESTADO_1; //Inicio da Máquina de Estados
    
    while (machineState != ESTADO_5 && i < strlen(string) && foiAceito){
    	switch(machineState){
			case ESTADO_1:
				printf("Q1 - %c\n", string[i]);
				lex[i] = string[i];
				switch(string[i]){
					case '/':
						i++;
						machineState = ESTADO_2;
						break;
					default:
						foiAceito = REJEITADO;
						break;
				}
				break;
			case ESTADO_2:
				printf("Q2 - %c\n", string[i]);
				lex[i] = string[i];
				switch(string[i]){
					case '*':
						i++;
						machineState = ESTADO_3;
						break;
					default:
						foiAceito = REJEITADO;
						break;
				}
				break;
			case ESTADO_3:
				printf("Q3 - %c\n", string[i]);
				lex[i] = string[i];
				switch(string[i]){
					case '*':
						i++;
						machineState = ESTADO_4;
						break;
					default:
						i++;
						break;
				}
				break;	
			case ESTADO_4:
				printf("Q4 - %c\n", string[i]);
				lex[i] = string[i];
				switch(string[i]){
					case '*':
						i++;
						break;
					case '/':
						machineState = ESTADO_5;
						break;
					default:
						i++;
						machineState = ESTADO_4;
						break;
				}
				break;
		}
	}
	
    if (machineState == ESTADO_5 && foiAceito == ACEITO){
        printf("\n%s\n", lex);
        printf("> O comentário foi aceito\n");
        return 0;
    }
    printf("\n%s\n", lex);
    printf("> O comentário não foi aceito\n");
    return 0;
}
