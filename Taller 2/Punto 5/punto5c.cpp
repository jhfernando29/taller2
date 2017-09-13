//Jhon fernando alonso
//Programa que calcula la suma de 2^1+2^2+2^3+...+2^n

//Librerias
#include<stdio.h>


//Inicio de programa
int main (){
	
	//Declarar variables
	int iVar,iNum,iSuma=0,iCont=0;
	
	//Solicitar limite de la suma
	printf("Ingrese numero para limite de suma ");
	scanf("%d", &iNum);
	
	//Incio del ciclo
	for(iVar=0;iVar<=iNum;iVar++){		
		iSuma+=iCont;
		iCont++;
	}
	
	//Salida del resultado de la suma
	printf("El resultado de la suma %d ", iSuma);
	
	//Fin del programa
	return 0;
}
