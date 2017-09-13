//Jhon fernando alonso
//Programa para que el usuario cree matris

//Librerias
#include <stdio.h>

int main(){
	
	//Definiendo matris y declarando variables
	int matris [100][100];
	int filas, columnas;
	int j,i;
	
	//Solicitando informacion para crear matris
	printf("digite numero de filas: ");
	scanf("%d", &filas);
	printf("digite numero de columnas: ");
	scanf("%d", &columnas);
	
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("digite un numero: ");
			scanf("%d",&matris[i][j]);
		}
	}
	printf("\n");
	
	//Imprimiendo matris
	printf("Mostrando matris \n\n");
	
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("%d ", matris[i][j]);			
		}printf("\n");
	}	
	
	return 0;
	//Fin del programa
}
