#include <stdio.h>

int main()
{
	int num;
	
	printf("원하는 년도를 입력하세요:");
	scanf("%d", &num);
	
	if( num % 4 == 0 || num % 400 == 0)
	printf("윤년입니다.");
	
	else
	printf("평년입니다.");
	
	return 0;
}

