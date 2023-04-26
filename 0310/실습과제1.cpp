#include <stdio.h>

int main()
{
	int i, j, dan;

	printf("몇 단을 보시겠습니까?: ");
	scanf("%d", &dan);
	
	if (dan <= 10 && dan >= 1)
	{
		for(int i = 1; i <= 10; i ++)
		{	
		printf("%d * %d = %d\n", dan, i, dan * i);
		}
	}
	else
	{
		printf("1~10까지 입력하세요.");
	}
	return 0;
}  
