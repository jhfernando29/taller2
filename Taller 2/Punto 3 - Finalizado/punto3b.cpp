//Jhon fernando alonso
//Programa que suma los numeros del 1 al 100

//Librerias
#include<stdio.h>

int main (){
	
	//Declarar variables
	int iNum=0;
	int iCont=0;	
	
	//Condicion del ciclo
	while(iNum<=100)
	{ 
		iCont+=iNum;
		iNum++;	
	}
	
	//Salida en pantalla de la sumatoria
	printf("La suma de los numeros del 1 al 100 es %d", iCont);
	
	//Fin del programa
	return 0;
}
