#include <stdio.h>

int main()
{
	int num;
	
	printf("���ϴ� �⵵�� �Է��ϼ���:");
	scanf("%d", &num);
	
	if( num % 4 == 0 || num % 400 == 0)
	printf("�����Դϴ�.");
	
	else
	printf("����Դϴ�.");
	
	return 0;
}

