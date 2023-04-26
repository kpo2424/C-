#include <stdio.h>

int main()
{
	int a, b;
	
	printf("숫자A 입력:");
	scanf("%d", &a);
	printf("숫자B 입력:");
	scanf("%d", &b);	
		
	if (a > b)
	{
	printf("큰 숫자는 %d입니다.", a);
	}
	
	else if (a < b)
	{
	printf("큰 숫자는 %d입니다.", b);
	}
	
	else if (a == b)
	printf("두 숫자는 같습니다.");
	
return 0;
}


