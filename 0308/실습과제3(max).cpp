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
	//���� a�� �ִ��ּ� ���� 
	int max = a;
	int min = a;
	//b�� �ִ��̰ų� �ּ��϶� max�ٲ�
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
		
		printf("�ִ밪�� %d�Դϴ�.\n", max);
		printf("�ּҰ��� %d�Դϴ�.", min);
		
	return 0;
}

