#include <stdio.h>
//main���� ȣ���ؼ� ���  
int plus(){
	int a = 3;
	int b = 2;
	int result = a + b;
	return result;
}

int minus(){
	int a = 3;
	int b = 2;
	int result = a - b;
	return result;
}

int mul(){
	int a = 3;
	int b = 2;
	int result = a * b;
	return result;
}

int div(){
	int a = 3;
	int b = 2;
	int result = a / b;
	return result;
}


int main() // int main �տ� viod�� ��� ��  
{
	int result;
	result = plus(); 
	printf("3 + 2 = %d\n", result);
	result = minus(); 
	printf("3 - 2 = %d\n", result);
	result = mul(); 
	printf("3 * 2 = %d\n", result);
	result = div(); 
	printf("3 / 2 = %d\n", result);
	
	return 0;
}
