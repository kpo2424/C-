#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
	int ticket;
	long long  idNum;
	int num;
	int special;
	long long birthYear, birthMonth, birthDay;
	long long todayYear, todayMonth, todayDay;
	int age;
	int flag;
	
	printf("������ �����ϼ���.\n"); // ���� ����  
	printf("1. �ְ���\n");
	printf("2. �߰���\n");
	scanf("%d", &ticket);
	

	printf("�ֹι�ȣ�� �Է��ϼ���.\n"); // �ֹι�ȣ ���� 
	scanf("%lld", &idNum);

	// ���� ��¥ ���� ����
    time_t t = time(NULL);  
    struct tm *now = localtime(&t);  
    todayYear = now->tm_year + 1900;  
    todayMonth = now->tm_mon + 1;  
    todayDay = now->tm_mday;  
    
	// ������� ���� 
	birthYear = (idNum / 10000000)/10000; 
    birthMonth = (idNum / 10000000) % 10000;
    birthDay = (idNum / 10000000) % 100;
    
    //���� ����ϱ� 
	age = (todayYear - birthYear) % 100;
	
//	printf("����� ���̴� %d���Դϴ�.\n", age);

	int dayA = 56000, dayT = 47000, dayS = 44000, dayG = 44000;
	int nightA = 46000, nightT = 40000, nightS = 37000, nightG = 37000;

	int price;
	
	if ( ticket == 1)
		if (age >= 19 && age <= 64 )
	{
		price = dayA;
	}
		 if (age >= 13 && age <= 18 )
	{
		price = dayT;
	}
		if (age >= 3 && age <= 12 )
	{
		price = dayS;
	}
		if (age >= 65 )
	{
		price = dayG;
	}
		if (age <= 2 )
	{
		price = 0;
	}
	
	if ( ticket == 2)
		if (age >= 19 && age <= 64 )
	{
		price = nightA;
	}
		 if (age >= 13 && age <= 18 )
	{
		price = nightT;
	}
		if (age >= 3 && age <= 12 )
	{
		price = nightS;
	}
		if (age >= 65 )
	{
		price = nightG;
	}
		if (age <= 2 )
	{
		price = 0;
	}

	printf("�� ���� �ֹ��Ͻðڽ��ϱ�? (�ִ� 10��)\n");
	scanf("%d", &num);

	
	printf("��������  �����ϼ���.\n"); // ������ ���� 
	printf("1. ���� (���� ���� �ڵ�ó��)\n");
	printf("2. �����\n");
	printf("3. ����������\n");
	printf("4. ���ڳ�\n");
	printf("5. �ӻ��\n");
	scanf("%d", &special);	
	
	
		float discount;
		
	if ( special == 1)
	{
		discount = 1;
	}
	if ( special == 2)
	{
		discount = 0.4;
	}
		if ( special == 3)
	{
		discount = 0.5;
	}
		if ( special == 4)
	{
		discount = 0.2;
	}
			if ( special == 5)
	{
		discount = 0.15;
	}
	
	float total;
	total = price * discount * num;
	
	printf("������ %f�Դϴ�.", total );
	  
	  
return 0;	
}

