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
		
	switch(avg/10)
{
	case 10:
	printf("���: A");
	break;
	
	case 9:
	printf("���: A");
	break;
	
	case 8:
	printf("���: B");
	break;	
	
	case 7:
	printf("���: C");
	break;
	
	case 6:
	printf("���: D");
	break;

	default:
	printf("���: F");
	break;
}
return 0;
}

