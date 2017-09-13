//Jhon fernando alonso
//Programa para calcular el codigo fibonacci

//Librerias
#include <stdio.h>

int main (){
    
	//Declarar variables
	long int iAct=1;
	int iSig=1,iAnt=0, iRan=1;
	int iNum=0;
	
	//Solicitar rango de serie	
	printf("Ingrese numero para fibonacci ");
	scanf("%d", &iNum);
		
	//Inicio de ciclo
	while (iRan<=iNum){
		
	//Resultado en pantalla
		printf("%d\n" ,iAct);	
		iRan++;
		iAnt=iAct+iSig;
		iAct=iSig;
		iSig=iAnt;
	}
	
return 0;
	//Fin del programa

}
