#include <stdio.h>
//main에서 호출해서 사용  
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


int main() // int main 앞에 viod를 써야 됨  
{
	plus(); // 앞plus랑 상관없는 이름임 같지 않음  
	minus();
	mul();
	div();
	return 0;
}
