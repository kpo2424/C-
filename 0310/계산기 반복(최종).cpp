#include <stdio.h>

int main()
{
	int num1, num2;
	char oper;
	int result;
	
	for(int i = 1; i <= 5; i ++)
	{	
		printf("%d번째 수식을 입력하세요:", i);
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
            printf("잘못된 연산자입니다.\n");
            continue;
		}
		
		printf("%d %c %d = %d 입니다.\n", num1, oper, num2, result); 
		
}
	
	return 0;
}
