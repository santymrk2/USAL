#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#define TAM 10
#define MAX TAM*2

/*
=========================EJERCICIO41==============================
Desafío 3: Generar un tercer vector
Comparar 2 vectores con 10 elementos enteros ya ordenados en forma
ascendente y generar un tercer vector también ordenado con los
elementos de ambos vectores.
------------------------------------------------------------------
RAMIRO GAZZANEO

*/

int main(){
int v1[TAM],v2[TAM],v3[MAX];

for(int i=0;i<TAM;i++)
{
	printf("ingresar un numero entero:\n");
	printf("case %d:",i+1);
	fflush(stdin);
	scanf("%d",&v1[i]);
}
for(int i=0;i<TAM;i++)
{
		
for(int k=0,m=1;m<TAM;k++,m++)
{
   	if(v1[k]>v1[m])
   	{  
   	int temp=v1[m];
   	v1[m]=v1[k];
   	v1[k]=temp;
     }
   }
} 
 
 for(int i=0;i<TAM;i++)
 {
    printf("ingresar un numero entero:\n");
	printf("case %d:",i+1);
	fflush(stdin);
	scanf("%d",&v2[i]);	
}
for(int i=0;i<TAM;i++)
{

for(int k=0,m=1;m<TAM;k++,m++)
  {
   	if(v2[k]>v2[m])
   	{
	   
   	int temp=v2[m];
   	v2[m]=v2[k];
   	v2[k]=temp;
    }
  }
}

system("cls");

	for(int i=0;i<TAM;i++)
 printf("%d\t%d\n",v1[i],v2[i]);
 
 for(int i=0;i<MAX;i++)
 {
 	if(i<TAM)
 {
 v3[i]=v1[i];
}
 if(i>=TAM)
 {
 v3[i]=v2[i-TAM];
}
/*
 for(int i=0;i<MAX;i++)
{
for(int k=0,m=1;m<MAX;k++,m++)
  {
  	
   	if(v3[k]>v3[m])
   	{
	   
   	int temp=v3[m];
   	v3[m]=v3[k];
   	v3[k]=temp;
    }
  }
}
 */
printf("%d===%d\n",i+1,v3[i]);
}
 
return 0;
}
