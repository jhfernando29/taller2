//Jhon fernando alonso
//Programa que calcula la suma de los 10 primeros cuadrados de los 10 
//primeros enteros mayores a 0

//Librerias
#include<stdio.h>

int main (){
	
	//Declarar variables
	int iCuadrado,iSuma=0,iVar;
	
	//Inicio ciclo para calcular cuadrado
	for (iVar=1;iVar<=10;iVar++){
		iCuadrado=iVar*iVar;
		iSuma+=iCuadrado;
	}
	
	//Muestra salida de la suma
	printf("La suma de los 10 primeros cuadros enteros mayores a 0 es: %d", iSuma);
	
	//Fin programa
	return 0;
}
