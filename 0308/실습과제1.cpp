#include <stdio.h>

int main()
{
	int num;
	
	printf("숫자 입력:");
	scanf("%d", &num);
	
	if (num % 2 == 0)
	printf("짝수입니다.");
	
	else if (num % 2 == 1)
	printf("홀수입니다.");	
	
return 0;
}


