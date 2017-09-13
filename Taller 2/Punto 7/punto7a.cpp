//Jhon fernando alonso
//Programa para sumar elementos de un vector

//Librerias
#include <stdio.h>

int main(){
	
	//Definiendo vector y declarando variables
	int iVector [] = {1,2,3,4,5};
	int iVar,iSuma=0;
	
	//Creando vector y realizando la suma de sus elementos
	for (iVar=0;iVar<5;iVar++){
		iSuma+=iVector[iVar];
			
	}
	
	//Mostrando suma de los elementos del vector
	printf("La suma acumulada es: %d", iSuma);
		
	return 0;
	//Fin del programa
	
}
