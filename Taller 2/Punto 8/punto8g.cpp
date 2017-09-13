//Jhon fernando alonso
//Programa para determinar si una matris es simetrica

//Librerias
#include<stdio.h>

//Inicio del programa
int main (){
	
	//Declarar matris y variables
	int iMatris[100][100];
	int iFilas,iColumnas;
	int iFi,iCo;
	int r=0;
		
	//Solicitando filas y columnas de matris
	printf("Ingrese numero de filas ");
	scanf("%d", &iFilas);
	printf("Ingrese numero de columnas ");
	scanf("%d", &iColumnas);
	
	
	//Llenando la matris
	for (iFi=0;iFi<iFilas;iFi++){
		for (iCo=0;iCo<iColumnas;iCo++){
			printf("Digite un numero para llenar matris ");
			scanf("%d", &iMatris[iFi][iCo]);
		}		
	}
	
	//Condicional para validar si es simetrica o no
	if(iFilas==iColumnas){
		for (iFi=0;iFi<iFilas;iFi++){
			for (iCo=0;iCo<iColumnas;iCo++){
				
		//Condicional para cuando matris sea simetrica o no
				if(iMatris[iFi][iCo]==iMatris[iCo][iFi]){
					r=1;
				}	
	}	
		}
	}
	
	//Condicional para validar si es simetrica o no
	if (r==1){
		printf("La matris es simetrica ");
		
	}else 
		{
		printf("La matris no es simetrica ");
	}
	
	//Fin del programa
	return 0;
}
