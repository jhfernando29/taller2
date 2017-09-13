//Jhon fernando alonso

//Librerias
#include<stdio.h>
#include<stdlib.h>

//Inicio programa
int main(){
	
	
	int iMatris[100][100];
	int iFilas,iColumnas;
	int iMatrisc[100][100];
	int iNumeros=0;
	
	//Solicitando filas y columnas de matris
	printf("Digite el numero de filas: "); 
	scanf("%d", &iFilas);
	printf("Digite el numero de columnas: "); 
	scanf("%d", &iColumnas);

	//Ciclo para llenar matris con numeros aleatorios	
	for(int i=0;i<iFilas;i++){
		for(int j=0;j<iColumnas;j++){
			iNumeros = 1+rand()%(100); 
			iMatris[i][j] = iNumeros;
		}
	}
	
	//Ciclo para copiar matris a otra 
	for(int i=0;i<iFilas;i++){
		for(int j=0;j<iColumnas;j++){
			iMatrisc[i][j] = iMatris[i][j];
		}
	}	

	//Ciclo para mostrar copia de matris
	for(int i=0;i<iFilas;i++){
		for(int j=0;j<iColumnas;j++){
			printf("%d ", iMatrisc[i][j]);
		}
		printf("\n");
	}
	
	//Fin de matris
	return 0;
}



