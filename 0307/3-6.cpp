#include <stdio.h>
int main()
{ 
	int num1;
	
	printf("���� �Է�:");
	scanf("%d", &num1);
	
	if (num1 >= 90) printf("������ A�Դϴ�.\n");

	else if (num1 >= 80) printf("������ B�Դϴ�.\n");
	 
	else if (num1 >= 70) printf("������ C�Դϴ�.\n");
	 
	else if (num1 >= 60) printf("������ D�Դϴ�.\n");
	
	else if (num1 < 60) printf("������ F�Դϴ�.\n");
	 
	 return 0;
}


