//Jhon fernando alonso
//Programa para calcular el area de un triangulo

//Librerias
#include <stdio.h>

int main(){
	
	//Declarar variables
	float fBase;
	float fAltura;	
	float fArea;
	
	//Solicitar datos al usuario
	printf("Ingrese la base del triangulo: ");
	scanf("%f,", &fBase);
	printf("Ingrese la altura del triangulo: ");
	scanf("%f,", &fAltura);
	
	printf("\n");
	
	//Operacion para calcular el area
	fArea=fBase*fAltura/2;
	
	//Resultado en pantalla
	printf("El area es: %f\n", fArea);	
	
	return 0;
	//Fin del programa
}
