//Jhon fernando alonso
//Programa que copia arreglo a otro y muestra el resultado 
//de sus elementos multiplicado por 2

//Librerias
#include<stdio.h>

int main(){
	
	//Definiendo arreglo y declarando variables
	int iArreglo1[5],iArreglo2[5];
	int iVar1;
	
	//Creando arreglo madre
	for (iVar1=0;iVar1<5;iVar1++){
		printf("Ingrese un numero ");
		scanf("%d",&iArreglo1[iVar1]);
	}
	
	//Creando copia de arreglo y realizando multiplicacion de sus elementos 
	for(iVar1=0;iVar1<5;iVar1++)
	{
		iArreglo2[iVar1]=iArreglo1[iVar1]*2;
	}
	
	//Salto de linea
	printf("\n");
	
	//Mostrando en pantalla 
	printf("Copia del arreglo multiplicado por dos \n");
	printf("\n");
	
	//Mostrando copia del arreglo con operacion matematica
	for (iVar1=0;iVar1<5;iVar1++){
		printf("%d ", iArreglo2[iVar1]);
	}	
	
	return 0;
	//Fin del programa
}
