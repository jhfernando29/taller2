//Jhon fernando alonso
//Programa para determinar si un numero coincide con 3 ingresados 

//Librerias
#include <stdio.h>

int main (){
	
	//Declarar variables
	int iNum1,iNum2,iNum3,iNum4;
	
	//Solcitar datos al usuario
	printf("Ingrese un numero ");
	scanf("%d", &iNum1);
	printf("Ingrese un numero ");
	scanf("%d", &iNum2);
	printf("Ingrese un numero ");
	scanf("%d", &iNum3);
	
	//Salto para solicitar cuarto numero
	printf("\n");
	
	//Solicitar ultimo numero
	printf("Ingrese un ultimo numero ");
	scanf("%d", &iNum4);
	
	//Condicion para validar si los numeros coinciden con el cuarto ingresado
	if (iNum1==iNum4){
		printf("El numero coincide con el primer ingresado que es: %d\n", iNum1);
	}
	else{
		if (iNum2==iNum4){
			printf("El numero coincide con el segundo ingresado que es: %d\n", iNum2);
		}	
		else{
			if (iNum3==iNum4){
				printf("El numero coincide con el tercer ingresado que es: %d\n", iNum3);
			}	
		 else {
			printf("Ningun numero coincide con el cuarto ingresado ");
		}
	}
	}

	return 0;
	//Fin del programa
}
