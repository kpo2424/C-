#include <stdio.h>

int main()
{
	int count;
	
	for (int i = 0, j = 0; i < 10; i++) // ,�� �� ��� ���� 
	{	
		printf("i: %d ",i);
		printf("j: %d \n", j += 3); 
	}
	
	return 0;
}
