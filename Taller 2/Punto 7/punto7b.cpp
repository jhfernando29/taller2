//Jhon fernando alonso
//Programa para multiplicar elementos de un vector

//Librerias
#include <stdio.h>

int main(){
	
	//Definiendo vector y declarando variables
	int iVector [] = {1,2,3,4,5};
	int iVar,iMulti=0;
	
	//Creando vector y realizando multiplicacion
	for (iVar=0;iVar<5;iVar++){			
		iMulti=iVector[iVar]*iVector[iVar];	
	}
	
	//Mostrando resultado de multiplicacion
	printf("La multiplicacion acumulada es: %d", iMulti);
	
	return 0;
	//Fin del programa
}
