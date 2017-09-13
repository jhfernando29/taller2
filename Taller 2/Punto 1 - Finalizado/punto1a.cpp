//Jhon fernando alonso
//Programa para calcular el diametro, longitud y area de una circunferencia

//Librerias
#include <stdio.h>

int main(){
	
	//Declarar variables
	float fRadio;
	float fDiametro;
	float fLongitud;
	float fArea;
	float fPi=3.141592;
	
	//Solicitar datos al usuario
	printf("Ingrese el radio del circulo: ");
	scanf("%f,", &fRadio);
	
	//Operaciones matematicas para calcular lo solicitado
	fDiametro=fRadio*2;
	fLongitud=fDiametro*fPi;
	fArea=fPi*fRadio*fRadio;

	//Salida en pantalla
	printf("El area es: %f\n", fArea);
	printf("El diametro es: %f\n", fDiametro);
	printf("La circunferencia es: %f\n", fLongitud);
	
	
	
	return 0;
	//Fin del programa
}
