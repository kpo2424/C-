#include <stdio.h>

int main()
{
	int a, b, c;
	
	printf("���� ���� �Է�:");
	scanf("%d", &a);
	printf("���� ���� �Է�:");
	scanf("%d", &b);
	printf("���� ���� �Է�:");
	scanf("%d", &c);

	int sum = a +b +c;
	int avg = sum/3;
	
	printf("����:%d��, ����:%d��, ����:%d��\n", a, b, c);
	printf("����:%d\n",sum);
	printf("���:%d\n",avg);
	
	if ( avg >= 90 )
	{
		printf("���: A");	
	}	
	else if ( avg >= 80 && avg <90 )
	{
		printf("���: B");	
	}	
	else if ( avg >= 70 && avg <80 )
	{
		printf("���: C");	
	}
	else if ( avg >= 60 && avg <70 )
	{
		printf("���: D");	
	}
	else if ( avg <60 )
	{
		printf("���: F");	
	}
	
	return 0;
}

