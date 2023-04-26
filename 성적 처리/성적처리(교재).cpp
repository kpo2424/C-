#include <stdio.h>

int main(){
   int kor[5];
   int rank[5];
   int i, j, sum=0;
   float avg;
   
   for(i=0; i<5; i++){
      printf("[%d] 학생의 국어 점수: ",i+1);
      scanf("%d", &kor[i]);
      
      rank[i]=1;
      
      sum = sum + kor[i];
      
   }
   avg = (float)sum / 5;
   
   for(i=0;i<5;i++){
      for(j=0;j<5;j++){
         if(kor[i]<kor[j]){
            rank[i]++;            
         }
      }
   }
   
   printf("\n번호\t 점수\t 등수\n");
   printf("---------------------\n");
   for(i=0; i<5; i++){
      printf("%d\t %d\t %d\n",i+1, kor[i], rank[i]);
   }
   
   printf("합계: %d\n", sum);
   printf("평균: %.2f", avg);
}
