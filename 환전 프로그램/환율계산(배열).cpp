#include<stdio.h>
int main()
{
	float won, change;
	float money;
	float exchangerate[11] = {1320.90, 959.44, 1391.54, 951.90, 190.14, 23.78, 1589.98, 869.62, 812.28, 17.35};
	char* stringEx[11] = {"�޷�", "��", "����", "ĳ���ٴ޷�", "����", "���", "����", "ȣ�ִ޷�", "��������޷�", "���" };
	int country;
	int thousand, fivehundred, hundred, ten; 
	
	printf("ȯ���� ���ϴ� �ݾ��� �Է��ϼ���(��ȭ) : ");
	scanf("%f", &won); 
	
	printf("ȯ���� ��ȭ�� �����ϼ���(1:USD, 2:JPY, 3:EUR, 4:CAD, 5:CNY, 6:PHP, 7:GBP, 8:AUD, 9:NZD, 10:RUB):");
	scanf("%d", &country);
	
		if(country == 2)	
		{
			printf("���� ȯ��:%.2f\n", exchangerate[country-1]);//[]���� 0���� �����ε� 1���� �Է� �����ϱ�  
			
			money = (float)won/exchangerate[country-1];
			change = won-(int)money*exchangerate[country-1];
			change = (int)(change/10)*10;
		
			printf("ȯ�� ���\n%s :%d\n�Ž�����:%d��\n", stringEx[country-1], (int)(money*100), (int)change);
		}
	
		else
		{
			printf("���� ȯ��:%.2f\n", exchangerate[country-1]);//[]���� 0���� �����ε� 1���� �Է� �����ϱ�  
			
			money = (float)won/exchangerate[country-1];
			change = won-(int)money*exchangerate[country-1];
			change = (int)(change/10)*10;
			
			printf("ȯ�� ���\n%s:%d\n�Ž�����:%d��\n", stringEx[country-1], (int)money, (int)change);
		}
		
		thousand = (int)change / 1000;
		fivehundred = ((int)change % 1000) / 500;
		hundred = ((int)change % 500) / 100;
		ten = ((int)change % 100) / 10;
		
		printf("õ���� : %d��\n����� : %d��\n��� : %d��\n�ʿ� : %d��", thousand, fivehundred, hundred, ten);
		
	return 0;
	
}
