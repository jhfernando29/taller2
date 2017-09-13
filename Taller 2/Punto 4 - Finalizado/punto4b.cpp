//Jhon fernando alonso
//programa que solicita la entrada estándar de un entero del 1 al 10 
//y muestre en la salida estándar su tabla de multiplicar

//librerias
#include <stdio.h>

int main (){
	
	//Declarar variables
	int iNum,iVar=1,iTot;
	
	//Solcitar numero al usuario
	printf("ingrese un numero ");
	scanf("%d", &iNum);
	
	//Condicion 
	do{		
		if (iNum>=1 && iNum<=10){
		iTot=iNum*iVar;		
		printf("%d * %d = %d \n", iVar,iNum,iTot);
		iVar++;		
	}	
		//Si no se cumple condicion sale del programa
		else 
			{
			printf("El numero no esta en el rango de 1 a 10 ");
			return 0;
		}		
	}	
	
	//Hasta que se cumpla
	while(iVar<=10);	
	
	return 0;
	//Fin del programa
	
}
