//Jhon fernnado alonso
//Programa para crear una matriz y mostrar su traspuesta

//Librerias
#include <stdio.h>

int main (){
	
	//Declarar variables
	int iFila,iColumna;
	int iMatris[3][3];	
	
	//Ciclo para filas
	for (iFila=0;iFila<3;iFila++)
	{
		//Ciclo para columnas
		for (iColumna=0;iColumna<3;iColumna++)
		{  
			printf ("Ingrese un numero ");
		    scanf("%d", &iMatris[iFila][iColumna]);
		}		
	}
	
	//Salto de linea
	printf("\n");
	
	//Se muestra matriz original
	printf("Matris original: \n");
	
	for(iFila=0;iFila<3;iFila++)
	{
		for(iColumna=0;iColumna<3;iColumna++)
		{
			printf("%d ", iMatris[iFila][iColumna]);
		}
		printf("\n");
	}
	
	//Salto de linea
	printf("\n");	
	
	//Se muestra matriz traspuesta
	printf("Matris traspuesta: \n");
	
	for(iFila=0;iFila<3;iFila++)
	{
		for(iColumna=0;iColumna<3;iColumna++)
		{
			printf("%d ", iMatris[iColumna][iFila]);
		}
		printf("\n");
	}
	
	return 0;
}
