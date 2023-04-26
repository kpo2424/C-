#include <stdio.h>
int main()
{ 
	int age;
	
	printf("나이:");
	scanf("%d", &age);
	
	if ( age < 65 )
	{
		printf("2,000원 입니다.\n");
	 } 
	 
	else if ( age >= 65 )
	
	{
		printf("무료입니다.");
	 } 
	 
	 return 0;
	 
}

