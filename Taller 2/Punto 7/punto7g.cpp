//Jhon fernando alonso
//Programa para conbinar dos vectores 

//Librerias
#include <stdio.h>


int main (){
	
	//Definir Vectores y declarar variables
	char cVector1 [] = {'b','c','d','f','g'};
	char cVector2 [] = {'a','e','i','o','u'};	
	char cVector3 [10];	
	int iVar;
	
	//Copiando contenido de vector 1 al 3
	for (iVar=0;iVar<5;iVar++){
		cVector3[iVar] = cVector1[iVar];		
	}
	
	//Copiando contenido de vector 2 al 3
	 for (iVar=5;iVar<10;iVar++){
		 cVector3[iVar] = cVector2[iVar];
	 }
	 
	//Mostrando contenido de vector 3	
	  printf("%s\n", &cVector3[iVar]);		 
	
	return 0;
	//Fin programa
}
