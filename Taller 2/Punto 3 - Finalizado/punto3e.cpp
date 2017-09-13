//Jhon fernando alonso
//Programa para calcular el factorial de un numero

//Librerias
#include<stdio.h> 

int main() { 
	
	//Declarar variables
	int iNum,iContador;
	long int iTotal;
	
	iContador=1;
	iTotal=1;
	
	//Solcitar numero 
	printf("Ingrese un numero para calcular su factorial: ");
	scanf("%d",&iNum);
	
	//Inicio ciclo
	while(iContador<=iNum)
	{
		iTotal = iTotal * iContador;
		iContador++;
	}
	
	//Resultado en pantalla
	printf("El factorial es %d", iTotal);
	
return 0;
   //Fin programa

} 
