#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
#define DOBTAM TAM*2

int main() {
   int arr1[TAM], arr2[TAM], arr3[DOBTAM];

   for(int i=0; i<TAM;i++) {
      arr1[i]= i+1;
   }
   for(int i=0; i<TAM;i++) {
      arr2[i]= i*2;
   }

   for(int i=0; i<TAM; i++) {
      printf("%d       %d\n",arr1[i], arr2[i]);
   }
   for(int i=0, m=0; i<DOBTAM; i++) {
      if(arr1[i]<arr2[i]){
         arr3[m]=arr1[i];
         arr3[m+1]=arr2[i];
      } else {
         arr3[m-1]=arr2[i];
         arr3[m+1]=arr1[i];
      }
      m=m+1;
   }
   for(int i=0; i<DOBTAM; i++) {
      printf("%d\n",arr3[i]);
   }
   return 0;
}
