#include <stdio.h>
#include <math.h>

int main()
{
	int won;
	int num; 
const	float USD = 1194.50; //����� ���� �����Ѵ� (����� �� �빮�ڷ� ����) 
		float JPY = 1101.48;
		float EUR = 1392.26;
		
	printf("ȯ���� ���ϴ� �ݾ��� �Է��ϼ���(��ȭ):");
	scanf("%d", &won);
	printf("ȯ���� ��ȭ�� �����ϼ���(1:USD, 2:JPY, 3:EUR):");
	scanf("%d", &num);
	
	if(num == 1) {
	printf("���� ȯ��: %.2f\n" , USD);
	printf("ȯ�� ���" );
	
	float a = won / USD; // a=ȯ���ϴ� �ݾ� 
	float b = (a - floor(a)); // b= �Ҽ��� �� �޷�
		
	printf("�޷�:%g�޷�\n", floor(a)); // �Ҽ��� �� ����, .0���ֱ� 
	
	if (a == floor(a))	// ȯ���ϴ� �ݾ��� �� ������ �������� �Ž����� ���� 
	printf("�Ž�����:0��");
  	
	else// �Ҽ��� ������ �޷��� ������    
	printf("�Ž��� ��:%g��\n", floor((b*USD)*0.1)/0.1); // �޷� * ȯ��= �Ž��� �� (���� �ڸ� ����) 
	
	int change = floor((b*USD)*0.1)/0.1; //�Ž��� �� 1590�� 
	int thousand = floor(change * 0.001); //õ���� ���� 1�� 
	printf("õ����:%d��\n", thousand); // �� %d�ε� ������ �Ʒ� �����? int�� 
		
	int hundredChange = abs((thousand * 1000) - change); //�� ��� ���� �ܵ� 590�� 
	int hundred = floor(hundredChange * 0.01); //��� ���� �ܵ� ���� 5�� 

	if (hundred == 5) //������� �� 
	printf("�����:1��\n");	
	else if (hundred > 5) //����� �̻��� �� 
	printf("�����:1��\n���:%d��\n", hundred-5);
	else if (hundred < 5) // ����� �̸��� �� 
	printf("�����:0��\n���:%d��\n", hundred);	
	
	int tenChange = abs((hundred * 100) - hundredChange); //�� �ʿ� ���� �ܵ� 90�� 
	int ten = floor(tenChange * 0.1); // �ʿ� ���� 
	
	printf("�ʿ�:%d��\n", ten);
}
	if(num == 2) {
	printf("���� ȯ��: %.2f\n" , JPY);
	printf("ȯ�� ���" );
	
	float c = won / (JPY*100); 
	float d = (c - floor(c));  
		
	printf("��:%g��\n", floor(c)); // �Ҽ��� �� ����, .0���ֱ� 
	
	if (c == floor(c))	// ȯ���ϴ� �ݾ��� �� ������ �������� �Ž����� ���� 
	printf("�Ž�����:0��");
  	
	else// �Ҽ��� ������ ��ȭ�� ������    
	printf("�Ž��� ��:%g��\n", floor((d*JPY)*0.1)/0.1); // ��ȭ * ȯ��= �Ž��� �� (���� �ڸ� ����) 
	
	int change = floor((d*JPY)*0.1)/0.1; //�Ž��� �� 660�� 
	int thousand = floor(change * 0.001); //õ���� ���� 1�� 
	printf("õ����:%d��\n", thousand); // �� %d�ε� ������ �Ʒ� �����? int�� 
		
	int hundredchange = abs((thousand * 1000) - change); //�� ��� ���� �ܵ� 590�� 
	int hundred = floor(change * 0.01); //��� ���� �ܵ� ���� 5�� 

	if (hundred == 5) //������� �� 
	printf("�����:1��\n���:0��\n");	
	else if (hundred > 5) //����� �̻��� �� 
	printf("�����:1��\n���:%d��\n", hundred-5);
	else if (hundred < 5) // ����� �̸��� �� 
	printf("�����:0��\n���:%d��\n", hundred);	
	
	int tenchange = abs((hundred * 100) - hundredchange); //�� �ʿ� ���� �ܵ� 90�� 
	int ten = floor(tenchange * 0.1); // �ʿ� ���� 
	
	printf("�ʿ�:%d��\n", ten);	
}
	if(num == 3) {
	printf("���� ȯ��: %.2f\n" , EUR);
	printf("ȯ�� ���" );
			
 	float e = won / EUR; 
	float f = (e - floor(e)); 
		
	printf("����:%g����\n", floor(e));
	
	if (e == floor(e))
	printf("�Ž�����:0��");
  	
	else   
	printf("�Ž��� ��:%f��\n", floor((f*EUR)*0.1)/0.1);
	
	int change = floor((f*EUR)*0.1)/0.1;
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
}
	
return 0;	 
}

