#include <stdio.h>

int main()
{
	int i = 1;
	
	while (i <= 100) //���ǽ� //���⼭ ������ �ɶ� ���� �ڵ�� �Ѿ  
	{
		printf("%d\n", i); //���๮ -> ���ǽ����� ���ѷ��� 
		i++;
		
	if (i % 3 == 0)
		printf("%d=> 3�� ���\n", i);
	}
	
	return 0;
}
