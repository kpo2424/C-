#include <stdio.h>

int main()
{
	int num1, num2;
	char oper;
	int result;
	
	for(int i = 1; i <= 5; i ++)
	{	
		printf("%d��° ������ �Է��ϼ���:", i);
		scanf("%d %c %d", &num1, &oper, &num2);
		
		switch(oper)
		{
		case '+' :
			result = num1 + num2;
			break;
		
		case '-' :
			result = num1 - num2;
			break;
		
		case '/' :
			result = num1 / num2;
			break;
		
		case '*' :
			result = num1 * num2;
			break;
		
		default :
            printf("�߸��� �������Դϴ�.\n");
            continue;
		}
		
		printf("%d %c %d = %d �Դϴ�.\n", num1, oper, num2, result); 
		
}
	
	return 0;
}
