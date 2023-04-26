#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{ 
	int a, b, c;
	
	printf("a, b, c:");
	scanf("%d %d %d", &a, &b, &c);
	
	int sum = a + b +c;	
	int avg = sum / 3;
	
	printf("평균:%d\n", avg);
	
	if(a >= 40 && b >= 40 && c >= 40 && avg >= 60)
	{
		printf("합격");
	}
	else
	{
		printf("불합격");
	}
	return 0;
}


