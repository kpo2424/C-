#include <stdio.h>

int main()
{
	int a, b, c, d, e;
	
	printf("����A �Է�:");
	scanf("%d", &a);
	printf("����B �Է�:");
	scanf("%d", &b);
	printf("����C �Է�:");
	scanf("%d", &c);
	printf("����D �Է�:");
	scanf("%d", &d);
	printf("����E �Է�:");
	scanf("%d", &e);
	
	int max = a;
	int min = a;
	//�ִ밪 ã�� 
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
	//�ּҰ� ã��  
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
	
	printf("�ִ밪�� %d�Դϴ�.", max);	
	printf("�ּҰ��� %d�Դϴ�.", min);
	
	return 0;
} 
