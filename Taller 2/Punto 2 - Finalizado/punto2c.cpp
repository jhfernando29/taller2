//Jhon fernando alonso
//Programa para determinar si un numero es par o impar

//Librerias
#include <stdio.h>

int main() {
	//Declarar variables
	int iNum;
	
	//Captura de datos
	printf("Ingrese un numero ");
	scanf("%d", &iNum);
	
	//Salto de linea
	printf("\n");

	//Condicional para determinar si el numero es par o impar
    if (iNum%2==0){
		printf("El numero es par");
	}else{
		printf("El numero es impar");
	}
	
	return 0;	
	//Fin del programa
}

