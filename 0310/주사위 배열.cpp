#include<stdio.h>
int main()
{
   int result;
   
   for(int i=2; i<10; i=i+3){
      for(int j=1; j<10; j++){
         result = i * j;
         printf("%d * %d = %d\t", i, j, result);
         
         result = (i+1)*j;
         printf("%d * %d = %d\t", (i+1), j, result);
         
         if(i == 8){
            printf("\n");
            continue;
         } 
         result = (i+2) * j;
         printf("%d * %d = %d\n" , i+2, j, result);
         
         printf("\n");
      }
      
   }
 }
