#include <stdio.h>

int main()
{
	int i = 1;
	
	while (i <= 100) //조건식 //여기서 거짓이 될때 다음 코드로 넘어감  
	{
		printf("%d\n", i); //실행문 -> 조건식으로 무한루프 
		i++;
		
	if (i % 3 == 0)
		printf("%d=> 3의 배수\n", i);
	}
	
	return 0;
}
