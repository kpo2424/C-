#include <stdio.h>
//main���� ȣ���ؼ� ���  
void plus(){
	int a = 3;
	int b = 2;
	int result = a + b;
	printf ("%d + %d = %d\n", a, b, result);
}

void minus(){
	int a = 3;
	int b = 2;
	int result = a - b;
	printf ("%d - %d = %d\n", a, b, result);	
}

void mul(){
	int a = 3;
	int b = 2;
	int result = a * b;
	printf ("%d * %d = %d\n", a, b, result);
}

void div(){
	int a = 3;
	int b = 2;
	int result = a / b;
	printf ("%d / %d = %d\n", a, b, result);
}


int main() // int main �տ� viod�� ��� ��  
{
	plus(); // ��plus�� ������� �̸��� ���� ����  
	minus();
	mul();
	div();
	return 0;
}
