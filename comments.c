#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int machineState;
	int tamanhoString;
	char string [100]; //Tamanho do vetor para 100 caracteres
	int i = 0; 
	
	printf("Coloque aqui a expressão a ser testada: ");
	scanf("%s", &string);
	
	machineState = 1; //Inicio da Máquina de Estados
	tamanhoString = strlen(string);
	
	while(i <= tamanhoString &&(machineState == 1 || machineState == 2) || machineState == 3 || machineState == 4){
		switch(machineState){
			case 1: 
				if(string[i] == '/'){
					i++;
					machineState = 2;
				}else{
					machineState = 0;
				}
				break;
			case 2:
				if(string[i] == '*'){
					i++;
					machineState = 3;
				}else{
					machineState = 0;
				}
				break;
			case 3:
				if(string[i] == '*'){
					i++;
					machineState = 4;
				}else{
					i++;
				}
				break;
			case 4:
				if(string[i] == '/'){
					i++;
					machineState = 5;
				}else if(string[i] == '*'){
					i++;
				}else{
					i++;
					machineState = 3;
				}
				printf("%s", string);
				break;
		}
	}
	if(machineState == 5){
		printf("\nAceito\n");
	}else{
		printf("\nErro!\n");
	}
	return 0;
}
