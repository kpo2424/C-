#include <stdio.h>

int main() 
{
    int num, i;
    printf("숫자 몇까지 할까요? ");
    scanf("%d", &num);
	
    for (i = 1; i <= num; i++) 
	{	
		int count = 0; //자리수를 검사할 숫자 
		int n = i; //while문 안에 정의돼서 반복문 돌때마다 초기화 시켜줘야 함  
		 
		while (n > 0) // n(일의자리)이 0이 되면 탈출  
		{ 
            if (n % 10 == 3 || n % 10 == 6 || n % 10 == 9) 
			{
                count++; // 자리수에 3,6,9가 있으면 +1 
            }
            n /= 10; // 자리수 확인(십의 자리, 백의 자리 검사하는 식)  일의 자리면 0이 나옴  
    	}

        if (count == 1) {
            printf("짝\n");
        } 
		else if (count == 2) {
            printf("짝짝\n");
        } 
		else if (count == 3) {
            printf("짝짝짝\n");
        } 

		else {
            printf("%d\n", i);
        }
	}
    return 0;
}

