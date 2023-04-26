#include <stdio.h>
int main()
{
	int number1;
	int number2;
	
	printf("정수 두개를 입력하세요: ");
	scanf("%d %d", &number1, &number2);
	
	int sum = number1 + number2;
	
	printf("입력하신 정수의 합은 %d입니다.\n", sum);
	
		return 0;
}

