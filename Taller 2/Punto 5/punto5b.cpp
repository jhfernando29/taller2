#include<stdio.h>

int main (){
	
	int iMayor,iMenor,iVar,iNum;	
	
	for (iVar=1;iVar<=6;iVar++){
		
		printf("Ingrese la temperatura %d : ", iVar);
		scanf("%d", &iNum);		
		
		if(iNum==0)
		{
			iMayor=iNum;
			iMenor=iNum;
		}
		else {
			
			if (iNum>iMayor){
				iMayor=iNum;
			}  
			if (iNum<iMenor){
				iMenor=iNum;
			}
			
		}	
	}
	
	printf("La temperatura mas alta es %d\n ", iMayor);
	printf("La temperatura mas baja es %d ", iMenor);	
	
	
	return 0;
}
