#include <stdio.h>
int main()
{ 
	int excel;
	int ppt;
	int word;
	
	printf("����, �Ŀ�����Ʈ, ����:");
	scanf("%d %d %d", &excel, &ppt, &word);
	
	int avg = (excel + ppt + word)/3;
	
	printf("���: %d\n", avg);
	
	if (avg >= 60)
	{
		printf("�հ�");
	 } 
	 
	else	
	{
		printf("���հ�");
	 } 
	 
	 return 0;
	 
}


