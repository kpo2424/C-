#include <stdio.h>
int main()
{ 
	int num1, oper, num2;
	
	printf("���� ������ ����  �Է��ϼ���:");
	scanf("%d %c %d", &num1, &oper, &num2);
	
	switch(oper)
	{
		case '+':
		printf("%d", num1+num2);

		case '-' :
		printf("%d", num1-num2);
 		
		case '*' :
		printf("%d", num1*num2);
		
		case '/' :
		printf("%d", num1/num2);
		
		default:
		printf("�����ڸ� �߸� �Է��߽��ϴ�");
	}
	
	return 0;
}


