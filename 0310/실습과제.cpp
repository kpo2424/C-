#include <stdio.h>

int main()
{	

	printf("구구단 1~10단까지 출력(단 3의 배수인 단은 제외)\n");
	
		int dan;
		 
		for(dan = 1; dan <= 10; dan ++)
		{
		printf("=%d단=\n", dan); //한번 찍히고
		
			for(int i = 1; i <= 10; i ++ )
			
			printf("%d * %d = %d\n", dan, i, dan * i); //10번 찍히고 
		}
	

	return 0;
}  
