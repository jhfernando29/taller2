//Jhon fernando alonso
//Programa que imprime la tabla de multimplicar de un numero hasta 10

//Librerias
#include <stdio.h>

int main() {
	
	//Declarar variables
	int iNum;
	int iNum1,iNum2,iNum3,iNum4,iNum5,iNum6,iNum7,iNum8,iNum9,iNum10;
	
	//Solicitar numero de tabla
	printf("Ingrese el numero que desea ver la tabla: ");
	scanf("%d", &iNum);
	
	//Asignar operaciones
	iNum1=iNum*1;
	iNum2=iNum*2;
	iNum3=iNum*3;
	iNum4=iNum*4;
	iNum5=iNum*5;
	iNum6=iNum*6;
	iNum7=iNum*7;
	iNum8=iNum*8;
	iNum9=iNum*9;
	iNum10=iNum*10;
	
	//Mostrar tabla en la pantalla
	printf("%d * %d = %d \n", iNum,1,iNum1);
	printf("%d * %d = %d \n", iNum,2,iNum2);
	printf("%d * %d = %d \n", iNum,3,iNum3);
	printf("%d * %d = %d \n", iNum,4,iNum4);
	printf("%d * %d = %d \n", iNum,4,iNum5);
	printf("%d * %d = %d \n", iNum,6,iNum6);
	printf("%d * %d = %d \n", iNum,7,iNum7);
	printf("%d * %d = %d \n", iNum,8,iNum8);
	printf("%d * %d = %d \n", iNum,9,iNum9);
	printf("%d * %d = %d \n", iNum,10,iNum10);	
	
	return 0;
	//Fin del programa
}

