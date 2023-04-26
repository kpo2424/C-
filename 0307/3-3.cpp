#include <stdio.h>
int main()
{ 
	int num;
	
	printf("Á¤¼ö ÀÔ·Â:");
	scanf("%d", &num);
	
	if( num % 2 == 0)
	{
		printf("Â¦¼ö");
	}
	
	else if( num % 2 == 1)
	{
		printf("È¦¼ö");
	}
		return 0;
}
	
