#include <stdio.h>
int main()
{ 
	int age;
	int fee = 2000;
	
	printf("나이:");
	scanf("%d", &age);
	
	if ( age < 65 )
	{
		printf("요금:%d", fee);
     }
     
	else if ( age >= 65 )
	{
		printf("요금: 무료");
	 } 
	 
	 return 0;
	 
}

