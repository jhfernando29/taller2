//Jhon fernando alonso
//Programa para calcular valor a ganar por horas laboradas

//Librerias
#include <stdio.h>

int main(){
	
	//Declarar variables
	int iHdiurnas;
	int iHnocturna;
	int iHdominical;
	int iHfestivo;	
	int hdi=2500;
	int hno=(2500*35/100)+2500;
	int hdo=(2500*50/100)+2500;
	int fes=(2500*75/100)+2500;
	int thdi,thno,tfes,thdo,tsal;
	
	//Pedir datos al usuario
	printf("Ingrese la cantidad de horas Diurnas laboradas: ");
	scanf("%d,", &iHdiurnas);
	printf("Ingrese la cantidad de horas Nocturnas laboradas: ");
	scanf("%d,", &iHnocturna);
	printf("Ingrese la cantidad de horas Dominicales laboradas: ");
	scanf("%d,", &iHdominical);
	printf("Ingrese la cantidad de horas en Festivos laboradas: ");
	scanf("%d,", &iHfestivo);
	
	printf("\n");
	
	//Calcular valor de horas laboradas
	thdi=hdi*iHdiurnas;
	thno=hno*iHnocturna;
	thdo=hdo*iHdominical;
	tfes=fes*iHfestivo;	
	tsal=thdi+thno+thdo+tfes;
	
	//Resultados en pantalla
	printf("Total de horas Diurnas es: %d\n", thdi); 
	printf("Total de horas Nocturas es: %d\n", thno);
	printf("Total de horas Dominicales es: %d\n", thdo);
	printf("Total de horas en Festivos es: %d\n", tfes);
	
	//Salto de linea
	printf("\n");
	
	//Total de ingresos
	printf("El total de ingresos es: %d\n", tsal);	
	
	return 0;
	//Fin del programa
}
