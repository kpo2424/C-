#include <stdio.h>

int main()
{
	int i, j, dan;

	printf("�� ���� ���ðڽ��ϱ�?: ");
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
		printf("1~10���� �Է��ϼ���.");
	}
	return 0;
}  
