//Jhon fernando alonso
//Programa que realice un vector e imprima su inverso

//Librerias
#include <stdio.h>


//Inicio programa
int main (){
	
	//Declarar variables
	int vector [100];
	int l,i;
	
	//Solicitar longitud de vector 
	printf("Ingrese longitud del vector ");
	scanf("%d", &l);
	
	//Ciclo para llenar vector
	for (i=0;i<l;i++){
		printf("ingrese numeros para el vector ");
		scanf("%d", &vector[i]);
	}
	
	//Ciclo para imprimir el vector inverso
	 for (i=l-1;i>-1;i--){
		 printf("%d ", vector[i]);
	}	
	 
	 //Fin del programa
	 return 0;
}
