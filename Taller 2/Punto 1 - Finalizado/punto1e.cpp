//Jhon fernando alonso
//Programa para calcular cantidad de dinero en dolares

//Librerias
#include <stdio.h>

int main (){
	
	//Declarar variables
	int iVdolar;
	int iCdolares;
	int iTotal;
	
	//Captura de datos
	printf("Ingrese el valor del dolar ");
	scanf("%i",&iVdolar);
	printf("Ingrese la cantidad de dolares ");
	scanf("%i",&iCdolares);
	
	//Operacion para calcular cantidad de dinero
	iTotal = iVdolar*iCdolares;
	
	//Salto de lina
	printf("\n");
	
	//Resultado en pantalla
	printf("En total tiene  %i\n ",iTotal);
		
	return 0;
	//Fin del programa

}
