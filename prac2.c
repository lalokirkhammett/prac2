#include <stdio.h>
#include <stdlib.h>

//Programado por Eduardo Tableros Farfan

void buscar_cadena(char *cadena_1, char *cadena_2){
	
	int j = 0;
	int cad1_count = 0;
	int contador = 0;
	int encuentros = 0;
	char *indice_2 = cadena_2; 
	
	//Cuenta los caracteres de la cadena 2
	for(;*cadena_2!='\0';cadena_2++,contador++){
	}
		
	cadena_2 = indice_2;
	
	printf("contador: %d\n",contador);
	
	//Busca la cadena 2 en la cadena 1
	for(;*cadena_1!='\0';cadena_1++){
				
		if(cad1_count > j){
				
			//Reinicia el indice de la cadena 2
			cadena_2 = indice_2;
			
			//Reinicia j
			j=0;
			
			//Reinicia el cad1_count
			cad1_count = 0;
		}
				
		if(*cadena_1 == *cadena_2){
			
			cadena_2++;
			j++;			
		}
				
		//En caso de que encuentre la cadena
		if(contador == j){
			
			//Suma que ya la encontro
			encuentros++;
			
			//Reinicia el indice de la cadena 2
			cadena_2 = indice_2;
			
			//Reinicia j
			j=0;
		}
				
		cad1_count++;
		
	}//final for cadena_1
	
	if(encuentros!=0){
		
		printf("\nNumero de concurrencias de la cadena 2 en la cadena 1: %d",encuentros);		
	}else{
		
		printf("\nNo se encontro la cadena 2 en la cadena 1 :(");
	}
}

void main(){

	//Declaracion de variables
	int tamano = 0;
	char *cadena_1;
	char *cadena_2;
	char *cadena_3;
	
	//Ingreso del tamaño de las cadenas
	printf("Ingresa el tamano maximo de las cadenas: ");
	scanf("%d",&tamano);
	
	//Se le asigna el tamaño a los array
	cadena_1 = (char*)malloc(tamano*sizeof(char));
	cadena_2 = (char*)malloc(tamano*sizeof(char));
	cadena_3 = (char*)malloc(tamano*sizeof(char));	
	
	//Se llenana las cadenas
	printf("\n\nIngresa la cadena 1:\n>>");
	fflush(stdin);
	gets(cadena_1);
	
	printf("\n\nIngresa la cadena 2:\n>>");
	fflush(stdin);
	gets(cadena_2);
	
	printf("\n\nIngresa la cadena 3:\n>>");
	fflush(stdin);
	gets(cadena_3);		
	
	
	buscar_cadena(cadena_1,cadena_2);
	
}
