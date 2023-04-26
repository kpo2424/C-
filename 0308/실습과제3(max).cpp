#include <stdio.h>

int main()
{
	int a, b, c, d, e;
	
	printf("숫자A 입력:");
	scanf("%d", &a);
	printf("숫자B 입력:");
	scanf("%d", &b);
	printf("숫자C 입력:");
	scanf("%d", &c);
	printf("숫자D 입력:");
	scanf("%d", &d);
	printf("숫자E 입력:");
	scanf("%d", &e);
	//변수 a를 최대최소 설정 
	int max = a;
	int min = a;
	//b가 최대이거나 최소일때 max바뀜
	if (b > max)
		max = b;
	else if (b < min)
		min = b;
	
	if (c > max)
		max = c;
	else if (c < min)
		min = c;
		
	if (d > max)
		max = d;
	else if (d < min)
		min = d;

	if (e > max)
		max = e;
	else if (e < min)
		min = e;
		
		printf("최대값은 %d입니다.\n", max);
		printf("최소값은 %d입니다.", min);
		
	return 0;
}

