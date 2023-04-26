#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{ 
	int num1;
	int num2;
	
	printf("두 개의 정수를 입력하세요:");
	scanf("%d %d", &num1, &num2);
	
	int ave = (num1 + num2)/2;
	
	printf("평균은 %d입니다.\n", ave);
		 
	if (ave >= 90)
	{
		printf("성적은 A입니다.\n");
	 } 
 
	else if (ave >= 80)
	 {
		printf("성적은 B입니다.\n");
	 } 
	 
	else if (ave >= 70)
	 {
		printf("성적은 C입니다.\n");
	 } 
	 
	 else if (ave < 70)
	 {
		printf("성적은 F입니다.\n");
	 } 
	 
	 return 0;
}
