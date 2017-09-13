//Jhon fernando alonso
//Programa para calcular cantidad de numeros mayores que cero

//librerias
#include <stdio.h>

int main (){
	
	//Declarar variables
	int iNum,iMay=0;
	
	//Condicion 
	do{
		printf("ingrese un numero ");
		scanf("%d", &iNum);
		if (iNum>0){
			iMay=iMay+1;
		}
	}	
	//Hasta que se cumpla
	while(iNum!=0);
	
	//Salida en pantalla
	printf("Los mayores que 0 son %d numeros ", iMay);
	
	return 0;
	//Fin del programa
	
}
