#include <stdio.h>

int main()
{
	int count;
	
	scanf("%d", &count);
	
	for (int i = count; i > 0; i--) // 엘리베리터  
	{
		printf("Hello,world! %d\n",i);
	}
	
	return 0;
}
