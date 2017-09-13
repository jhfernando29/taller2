//Jhon fernando alonso
//Programa para determinar mayor de 2 numeros

//Librerias
#include <stdio.h>

int main (){
	
	//Declarar variables
	int iNum1;
	int iNum2;	
	
	//Captura de datos
	printf("Ingrese un numero ");
	scanf("%d", &iNum1);
	printf("Ingrese otro numero ");
	scanf("%d", &iNum2);	
	
	//Salto de linea	
	printf("\n");
	
	//Condiconal para determinar mayor de los 2 numeros
	if (iNum1>iNum2){
		printf("El mayor es %d", iNum1);
	}else{
		printf("El mayor es %d", iNum2);
	}	
	
	return 0;
	//Fin programa	
	
}
