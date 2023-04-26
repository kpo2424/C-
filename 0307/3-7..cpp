#include <stdio.h>
int main()
{ 
	int num1, oper, num2;
	
	printf("정수 연산자 정수  입력하세요:");
	scanf("%d %c %d", &num1, &oper, &num2);
	
	switch(oper)
	{
		case '+':
		printf("%d", num1+num2);

		case '-' :
		printf("%d", num1-num2);
 		
		case '*' :
		printf("%d", num1*num2);
		
		case '/' :
		printf("%d", num1/num2);
		
		default:
		printf("연산자를 잘못 입력했습니다");
	}
	
	return 0;
}


