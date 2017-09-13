//Jhon fernando alonso
//Programa para determinar si un numero es positivo o negativo

//Librerias
#include <stdio.h>

int main()
{ //Declarar variables
	int iNum;	
	
	//Captura de datos
	printf("Ingresa un numero ");
	scanf("%d", &iNum);
	
	//Condiconal para determinar si el numero es positivo o negativo
	if (iNum>0){
		printf("El numero es positivo ");
	}else{
		printf("El numero es negativo ");
	}	
		
	return 0;
	//Fin programa	
}
