#include <stdio.h>

int main()
{
	int a, b;
	
	printf("����A �Է�:");
	scanf("%d", &a);
	printf("����B �Է�:");
	scanf("%d", &b);	
		
	if (a > b)
	{
	printf("ū ���ڴ� %d�Դϴ�.", a);
	}
	
	else if (a < b)
	{
	printf("ū ���ڴ� %d�Դϴ�.", b);
	}
	
	else if (a == b)
	printf("�� ���ڴ� �����ϴ�.");
	
return 0;
}


