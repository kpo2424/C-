#include <stdio.h>
int main()
{ 
	int num1, oper, num2;
	
	printf("���� ������ ����  �Է��ϼ���:");
	scanf("%d %c %d", &num1, &oper, &num2);
	
	if(oper == '+')
	{
		printf("%d %c %d = %d\n", num1, oper, num2, num1+num2);
	}
	
	else if(oper == '-')
	{
		printf("%d %c %d = %d\n", num1, oper, num2, num1-num2);
	}

	else if(oper == '*')
	{
		printf("%d %c %d = %d\n", num1, oper, num2, num1*num2);
	}
	
	else if(oper == '/')
	{
		printf("%d %c %d = %d\n", num1, oper, num2, num1/num2);
	}
	
	else
	{
		printf("�����ڸ� �߸� �Է��߽��ϴ�");
	}
	
	return 0;
}

