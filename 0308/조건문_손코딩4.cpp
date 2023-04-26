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
		
	switch(avg/10)
{
	case 10:
	printf("등급: A");
	break;
	
	case 9:
	printf("등급: A");
	break;
	
	case 8:
	printf("등급: B");
	break;	
	
	case 7:
	printf("등급: C");
	break;
	
	case 6:
	printf("등급: D");
	break;

	default:
	printf("등급: F");
	break;
}
return 0;
}

