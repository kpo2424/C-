#include <stdio.h>

int main()
{
	int num;
	
	printf("���ϴ� �⵵�� �Է��ϼ���:");
	scanf("%d", &num);
	printf("%d���� ������ �����ϴ�.\n", num);
	
	printf("1��:31��\n");
	
	if( num % 4 == 0 || num % 400 == 0)	
	printf("2��:29��\n");
	else
	printf("2��:28��\n");
	 
	printf("3��:31��\n");
	printf("4��:30��\n");
	printf("5��:31��\n");
	printf("6��:31��\n");
	printf("7��:30��\n");
	printf("8��:31��\n");
	printf("9��:30��\n");
	printf("10��:31��\n");
	printf("11��:30��\n");
	printf("12��:31��\n");
	
	return 0;
}


