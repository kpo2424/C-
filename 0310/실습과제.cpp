#include <stdio.h>

int main()
{	

	printf("������ 1~10�ܱ��� ���(�� 3�� ����� ���� ����)\n");
	
		int dan;
		 
		for(dan = 1; dan <= 10; dan ++)
		{
		printf("=%d��=\n", dan); //�ѹ� ������
		
			for(int i = 1; i <= 10; i ++ )
			
			printf("%d * %d = %d\n", dan, i, dan * i); //10�� ������ 
		}
	

	return 0;
}  
