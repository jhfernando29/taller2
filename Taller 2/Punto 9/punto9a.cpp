//Jhon fernando alonso
//Programa que imprime una cadena de caracteres si hay mas de 10 elementos

//Librerias
#include <stdio.h>

//Inicio programa
int main (){
	
	//Declarar longitud cadena y variables
	char sCadena[20];
	int iVar;
	
	//Solicitando datos al usuario
	printf("Digite una cadena de caracteres ");
	scanf("%s", &sCadena);	
    
	//Inciando ciclo para calcular cantidad de caracteres
	iVar=0;
	while (sCadena[iVar] != '\0') {
		
	iVar++;
	}
	
	//Condicional para validar si la cadena tiene mas de 10 datos
	if (iVar>10){
	printf("%s",  sCadena);
	}
	else 
		{
		return 0;
	}
	
	//Fin programa
	return 0;
}
