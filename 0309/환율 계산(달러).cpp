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
		
	printf("�޷�:%g�޷�\n", floor(a)); // �Ҽ��� �� ����, .0���ֱ� 
	
	if (a == floor(a))	// ȯ���ϴ� �ݾ��� �� ������ �������� �Ž����� ���� 
	printf("�Ž�����:0��");
  	
	else// �Ҽ��� ������ �޷��� ������    
	printf("�Ž��� ��:%g��\n", floor((b*1194.50)*0.1)/0.1); // �޷� * ȯ��= �Ž��� �� (���� �ڸ� ����) 
	
	int change = floor((b*1194.50)*0.1)/0.1; //�Ž��� �� 1590�� 
	int thousand = floor(change * 0.001); //õ���� ���� 1�� 
	printf("õ����:%d��\n", thousand); // �� %d�ε� ������ �Ʒ� �����? int�� 
		
	int hundredchange = abs((thousand * 1000) - change); //�� ��� ���� �ܵ� 590�� 
	int hundred = floor(hundredchange * 0.01); //��� ���� �ܵ� ���� 5�� 

	if (hundred == 5) //������� �� 
	printf("�����:1��\n");	
	else if (hundred > 5) //����� �̻��� �� 
	printf("�����:1��\n���:%d��\n", hundred-5);
	else if (hundred < 5) // ����� �̸��� �� 
	printf("�����:0��\n���:%d��\n", hundred);	
	
	int tenchange = abs((hundred * 100) - hundredchange); //�� �ʿ� ���� �ܵ� 90�� 
	int ten = floor(tenchange * 0.1); // �ʿ� ���� 
	
	printf("�ʿ�:%d��\n", ten);
	
return 0;	 
}

