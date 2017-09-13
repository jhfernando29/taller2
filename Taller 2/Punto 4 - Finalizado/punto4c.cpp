//Jhon fernando alonso
//Programa que lee valores enteros hasta que se introduzca un valor 
//en el rango [20-30] o se introduzca el valor 0. y entrega la suma 
//de los valores mayores a 0 introducidos

//Librerias
#include<stdio.h>

int main (){
	
	//Declarar variables
	int iNum,iSuma=0;	
	
	//Inicio condicion
	do{	
		printf("Ingrese un numero ");
		scanf("%d", &iNum);	
		
		//Condicional para rango de numeros de 20 a 30
		if (iNum>=20 && iNum<=30){
			iNum=0;
		}	
		
		//Condicional para numeros mayores a 0
		if(iNum>0){
		   iSuma+=iNum;
		}	
	}	
	
	//Mientras que se cumpla condicion
	while(iNum!=0);	
	
	//Salida de suma
	printf("La suma de los mayores que 0 es: %d", iSuma);	
	
	return 0;
}
