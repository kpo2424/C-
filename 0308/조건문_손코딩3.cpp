#include <stdio.h>

int main()
{
	int a, b, c;
	
	printf("국어 점수 입력:");
	scanf("%d", &a);
	printf("수학 점수 입력:");
	scanf("%d", &b);
	printf("영어 점수 입력:");
	scanf("%d", &c);

	int sum = a +b +c;
	int avg = sum/3;
	
	printf("국어:%d점, 수학:%d점, 영어:%d점\n", a, b, c);
	printf("총점:%d\n",sum);
	printf("평균:%d\n",avg);
	
	if ( avg >= 90 )
	{
		printf("등급: A");	
	}	
	else if ( avg >= 80 && avg <90 )
	{
		printf("등급: B");	
	}	
	else if ( avg >= 70 && avg <80 )
	{
		printf("등급: C");	
	}
	else if ( avg >= 60 && avg <70 )
	{
		printf("등급: D");	
	}
	else if ( avg <60 )
	{
		printf("등급: F");	
	}
	
	return 0;
}

