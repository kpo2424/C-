#include <stdio.h>
int main()
{ 
	int age;
	int fee = 2000;
	
	printf("����:");
	scanf("%d", &age);
	
	if ( age < 65 )
	{
		printf("���:%d", fee);
     }
     
	else if ( age >= 65 )
	{
		printf("���: ����");
	 } 
	 
	 return 0;
	 
}

