#include <stdio.h>
int main()
{ 
	int excel;
	int ppt;
	int word;
	
	printf("¿¢¼¿, ÆÄ¿öÆ÷ÀÎÆ®, ¿öµå:");
	scanf("%d %d %d", &excel, &ppt, &word);
	
	int avg = (excel + ppt + word)/3;
	
	printf("Æò±Õ: %d\n", avg);
	
	if (avg >= 60)
	{
		printf("ÇÕ°Ý");
	 } 
	 
	else	
	{
		printf("ºÒÇÕ°Ý");
	 } 
	 
	 return 0;
	 
}


