#include <stdio.h>

int main()
{
	int i, j, dan;

	while (1)
	{
	printf("몇 단을 보시겠습니까?: ");
	scanf("%d", &dan);
	
	if (dan <= 9 && dan >= 1)
	{
		for(int i = 1; i <= 9; i ++)
		{	
		printf("%d * %d = %d\n", dan, i, dan * i);
		}
		break;
	}
	else
	{
		printf("1~9까지 입력하세요.");
	}
}
	return 0;
}  
