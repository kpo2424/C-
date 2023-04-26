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
	
	int max = a;
	int min = a;
	//최대값 찾기 
	if (a>=b)
		if (a>=e && a>=c && a>=d)
		max = a;
	if (b>=a)
		if (c<=b && d<=b && e<=b)
		max = b;
	if (c>=a)
		if (c>=b && c>=d && c>=e)
		max = c;		
	if (d>=a)
		if (d>=b && d>=c && d>=e)
		max = d;
	if (e>=a)
		if (e>=b && e>=c && e>=d)
		max = e;
	//최소값 찾기  
	if (a<=b)
		if (a<=e && a<=c && a<=d)
		min = a;
	if (b<=a)
		if (c>=b && d>=b && e>=b)
		min = b;
	if (c<=a)
		if (c<=b && c<=d && c<=e)
		min = c;
	if (d<=a)
		if (d<=b && d<=c && d<=e)
		min = d;
	if (e<=a)
		if (e<=b && e<=c && e<=d)
		min = e;	
	
	printf("최대값은 %d입니다.", max);	
	printf("최소값은 %d입니다.", min);
	
	return 0;
} 
