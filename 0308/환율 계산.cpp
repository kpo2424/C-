#include <stdio.h>
#include <math.h>

int main()
{
	int won;
		
	printf("ȯ���� ���ϴ� �ݾ��� �Է��ϼ���(��ȭ):");
	scanf("%d", &won);
	printf("���� ȯ��:1194.50\nȯ�� ���\n");
	
	float a = won / 1194.50; // a=ȯ���ϴ� �ݾ� 
	float b = (a - floor(a)); // b= �Ҽ��� �� �޷�
		
	printf("�޷�:%g�޷�\n", floor(a)); // �Ҽ��� �ؿ� ������ 0���ֱ� 
	
	if (a == floor(a))	// ȯ���ϴ� �ݾ��� �� ������ �������� �Ž����� ���� 
	printf("�Ž�����:0��");
  
	else// �Ҽ��� ������ �޷��� ������    
	printf("�Ž��� ��:%g��", floor((b*1194.50)*0.1)/0.1); // �޷� * ȯ��= �Ž��� �� 
	
return 0;	
}

