#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{ 
	int num1;
	int num2;
	
	printf("�� ���� ������ �Է��ϼ���:");
	scanf("%d %d", &num1, &num2);
	
	int avg = (num1 + num2)/2;
	
	printf("����� %d�Դϴ�.\n", avg);
		 
	if (avg >= 90)
	{
		printf("������ A�Դϴ�.\n");
	 } 
	 
	if (avg >= 80 && avg <90)
	 {
		printf("������ B�Դϴ�.\n");
	 } 
	 
	if (avg >= 70 && avg <80)
	 {
		printf("������ C�Դϴ�.\n");
	 } 
	 
	 if (avg < 70)
	 {
		printf("������ F�Դϴ�.\n");
	 } 
	 
	 return 0;
}
