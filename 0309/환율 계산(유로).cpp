#include <stdio.h>
#include <math.h>

int main()
{
	int won;
		
	printf("ȯ���� ���ϴ� �ݾ��� �Է��ϼ���(��ȭ):");
	scanf("%d", &won);
	printf("���� ȯ��:1392.26\nȯ�� ���\n");
	
	float a = won / 1392.26; 
	float b = (a - floor(a)); 
		
	printf("����:%g����\n", floor(a));
	
	if (a == floor(a))
	printf("�Ž�����:0��");
  	
	else   
	printf("�Ž��� ��:%g��\n", floor((b*1392.26)*0.1)/0.1);
	
	int change = floor((b*1392.26)*0.1)/0.1;
	int thousand = floor(change * 0.001); 
	printf("õ����:%d��\n", thousand);
		
	int hundredchange = abs((thousand * 1000) - change); 
	int hundred = floor(hundredchange * 0.01);

	if (hundred == 5)
	{printf("�����:1��\n");}	
	else if (hundred > 5)
	{printf("�����:1��\n���:%d��\n", hundred-5);}
	else if (hundred < 5) 
	{printf("�����:0��\n���:%d��\n", hundred);}	
	
	int tenchange = abs((hundred * 100) - hundredchange);
	int ten = floor(tenchange * 0.1); 
	
	printf("�ʿ�:%d��\n", ten);
	
return 0;	 
}

