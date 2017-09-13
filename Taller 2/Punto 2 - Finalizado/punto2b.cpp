//Jhon fernando alonso
//programa para determinar mayor de 3 numeros 

//Librerias
#include <stdio.h>

using namespace std;

int main(){
	
	//Declarar variables
	int iNum1;
	int iNum2;
	int iNum3;
	
	//Captura de datos
	printf("Ingrese un numero ");
	scanf("%d", &iNum1);
	printf("Ingrese un numero ");
	scanf("%d", &iNum2);
	printf("Ingrese un numero ");
	scanf("%d", &iNum3);
	
	//Salto de linea
	printf("\n");
	
	//Condiconal para determinar mayor de los 3 numeros
	if (iNum1>iNum2 && iNum1>iNum3){
		printf("El mayor es %d\n", iNum1);
	}
	else{
		if (iNum2>iNum1 && iNum2>iNum3){
		printf("El mayor es %d\n", iNum2);
	}	
		else{
		printf("El mayor es %d\n", iNum3);
		}
	}
	
	return 0;
	//Fin programa
}
