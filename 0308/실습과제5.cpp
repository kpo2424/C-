#include <stdio.h>

int main()
{
	int num;
	
	printf("원하는 년도를 입력하세요:");
	scanf("%d", &num);
	printf("%d년은 다음과 같습니다.\n", num);
	
	printf("1월:31일\n");
	
	if( num % 4 == 0 || num % 400 == 0)	
	printf("2월:29일\n");
	else
	printf("2월:28일\n");
	 
	printf("3월:31일\n");
	printf("4월:30일\n");
	printf("5월:31일\n");
	printf("6월:31일\n");
	printf("7월:30일\n");
	printf("8월:31일\n");
	printf("9월:30일\n");
	printf("10월:31일\n");
	printf("11월:30일\n");
	printf("12월:31일\n");
	
	return 0;
}


