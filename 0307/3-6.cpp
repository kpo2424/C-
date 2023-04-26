#include <stdio.h>
int main()
{ 
	int num1;
	
	printf("점수 입력:");
	scanf("%d", &num1);
	
	if (num1 >= 90) printf("성적은 A입니다.\n");

	else if (num1 >= 80) printf("성적은 B입니다.\n");
	 
	else if (num1 >= 70) printf("성적은 C입니다.\n");
	 
	else if (num1 >= 60) printf("성적은 D입니다.\n");
	
	else if (num1 < 60) printf("성적은 F입니다.\n");
	 
	 return 0;
}


