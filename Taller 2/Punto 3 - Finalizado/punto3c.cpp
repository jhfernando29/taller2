//Jhon fernando alonso
//Programa que suma los numeros pares del 1 al 50

//Librerias
#include<stdio.h>

int main (){
	
	//Declarar variables
	int iNum=1;
	int iCont=0;	
	
	//Inicio ciclo
	while(iNum<=50){			
	
	//Condicion del ciclo
	if (iNum%2==0) {
	iCont += iNum;		
	} iNum++;	
	}
	//Salida en pantalla de la sumatoria
	printf("La suma de los numeros pares del 1 al 50 es %d", iCont);
		
	return 0;
	//Fin del programa
	
}
