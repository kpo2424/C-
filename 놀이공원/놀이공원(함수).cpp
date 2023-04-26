#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>   // ���ڿ� ó�� �Լ��� ����ϱ� ���� ��� ����

	int ticket, price;
	long long  idNum;
	int num;
	int special;
	long long birthYear = 0, birthMonth = 0, birthDay = 0;
	long long age;
	int flag;
	int sum = 0;
	
	const int dayBaby = 0, nightBaby = 0;
	const int dayAdult = 56000, nightAdult = 46000;
	const int dayTeen = 47000, nightTeen = 40000;
	const int dayChild = 44000, nightChild = 37000;
	const int dayOld = 44000, nightOld = 37000;	
	
	int totalOrderCount = 0;
	int ticketList[10];
	char* ticketName[20] = {"�ְ���", "�߰���"};
	int ageList[10];
	char* ageName[20] = {"����", "�", "û�ҳ�", "���", "������" };
	int numList[10];
	int specialList[10];
	char* specialName[20] = {"*����������", "*����ο������", "*���������ڿ������", "*���ڳ�������", "*�ӻ�ο������"}; 
	int priceList[10];
	
	int addOrder = 1;

//�������� �Է� �Լ�  
void ticketChoice(){		
	while (1){
		printf("������ �����ϼ���.\n");  
		printf("1. �ְ���\n");
		printf("2. �߰���\n");
		scanf("%d", &ticket);  
		
	if (ticket == 1 || ticket == 2)
   		break;
	else 
   		printf("�ٽ� �Է��ϼ���.\n");
	}	

	ticketList[totalOrderCount] = ticket;
	if (ticket == 1) ticketName[0];
	else ticketName[1];
} 	
	
//�ֹι�ȣ �Է� �Լ� 
void inputID() {
   while (true){	
   		printf("�ֹι�ȣ�� �Է��ϼ���.(-���� �Է�)\n");	
			char id[14]; // �ֹι�ȣ�� �Է¹��� ���ڿ� �迭
			char birthMonthStr[3]; // ���� ������ ���ڿ� �迭
			char birthDayStr[3]; // ���� ������ ���ڿ� �迭
			char birthYearStr[3];
			char flagStr[3];
			
			scanf("%s", id);
			
			birthYearStr[0] = id[0]; //�ֹι�ȣ�� �� �κ��� �����Ͽ� year �迭�� �ֱ�  
		    birthYearStr[1] = id[1];
		    birthYearStr[2] = '\0';
		    
		    birthMonthStr[0] = id[2]; //�ֹι�ȣ�� �� �κ��� �����Ͽ� month �迭�� �ֱ�  
		    birthMonthStr[1] = id[3];
		    birthMonthStr[2] = '\0';
		    
		    birthDayStr[0] = id[4]; //�ֹι�ȣ�� �� �κ��� �����Ͽ� day �迭�� �ֱ�  
		    birthDayStr[1] = id[5];
		    birthDayStr[2] = '\0';
		    
		    flagStr[0] = id[6]; //���� �ڸ� ����  
		    flagStr[1] = '\0';
		    
			
			if(	
				(atoi(birthYearStr) >= 00 && atoi(birthYearStr) <= 99)
				&&
			 	(strlen(id) == 13)
				 &&
				(atoi(birthMonthStr) >= 01 && atoi(birthMonthStr) <= 12)
				&&
				(atoi(birthDayStr) >= 01 && atoi(birthDayStr) <= 31)
				&&
			  	(atoi(flagStr) == 1 || atoi(flagStr) == 2 || atoi(flagStr) == 3 || atoi(flagStr) == 4)
			)
			{
				//printf("�Է��� �ֹι�ȣ�� ��������� %s�� %s�� %s���Դϴ�.\n", birthYearStr, birthMonthStr, birthDayStr);
				
		        birthYear = atoi(birthYearStr);
		    	birthMonth = atoi(birthMonthStr);
		    	birthDay = atoi(birthDayStr);
		    	
			    //���� ����ϱ�
				time_t t = time(NULL);  
			    struct tm *now = localtime(&t);  
			    int todayYear = now->tm_year + 1900;  
			    int todayMonth = now->tm_mon + 1;  
			    int todayDay = now->tm_mday;  
			 
				 //long long age;
				 age = (todayYear - birthYear) % 100; //�� ����  
				 //ageList[totalOrderCount] = age;
				 //printf("����� ���̴� %lld���Դϴ�.\n", age);
				 break; // if ������ ���� �ڵ�� �̵�  
			} //if�� ������ ������� ����  		
			else{
				printf("�ٽ� �Է��ϼ���.\n");
			}
	}
	
	ageList[totalOrderCount] = age;
	
	
		//���� �� ���̴뺰 �ݾ� 
		if (age >= 65){ 
			if(ticket == 1) price = dayOld;
			if(ticket == 2) price = nightOld;
			}
		else if (age>=19){	
			if(ticket == 1) price = dayAdult;
			if(ticket == 2) price = nightAdult;	
			}
		else if (age>=13){	
			if(ticket == 1) price = dayTeen;
			if(ticket == 2) price = nightTeen;	
			}
		else if (age>=3){	
			if(ticket == 1) price = dayChild;
			if(ticket == 2) price = nightChild;	
			}		
		else if (age<=2){
			if(ticket == 1) price = dayBaby;
			if(ticket == 2) price = nightBaby;
			}
	
		if(ageList[totalOrderCount] >= 65) ageName[totalOrderCount] = "����";
		else if (ageList[totalOrderCount]>=19) ageName[totalOrderCount] = "�";
		else if (ageList[totalOrderCount]>=13) ageName[totalOrderCount] = "û�ҳ�";
		else if (ageList[totalOrderCount]>=3) ageName[totalOrderCount] = "���";
		else if (ageList[totalOrderCount]<=2) ageName[totalOrderCount] = "������";
	
}
			
//Ƽ�� ���� �Է� �Լ�  
void inputTicketNum(){
	while (1){ 
		printf("��� �ֹ��Ͻðڽ��ϱ�? (�ִ� 10��)\n"); 
		scanf("%d", &num);
		  
		if (num >= 1  && num <= 10){
			(price = price * num); 
			break;
		}	
		else{
			printf("�ٽ� �Է��ϼ���.\n");				
		}
	}
	numList[totalOrderCount] = num;
}			
			
//�����׼��� �Լ�
void inputDiscount(){
	while (1){
		printf("�������� �����ϼ���.\n 1. ���� (���� ���� �ڵ�ó��)\n 2. �����\n 3. ����������\n 4. ���ڳ�\n 5. �ӻ��\n"); 
		scanf("%d", &special);
			  
		if (special > 6 || special == 0 ) printf("��ȿ���� �Է��ϼ���.");	
		else if (special == 1) {price = price * 1; break;}	
		else if	(special == 2) {price = price * 0.6; break;}	
		else if (special == 3) {price = price * 0.5; break;}
		else if	(special == 4) {price = price * 0.8; break;}
		else if	(special == 5) {price = price * 0.85; break;}	
		}
		
		specialList[totalOrderCount] = special;		
	
		if (specialList[totalOrderCount] == 1) specialName[totalOrderCount] = "*����������";
		if (specialList[totalOrderCount] == 2) specialName[totalOrderCount] = "*����ο������";
		if (specialList[totalOrderCount] == 3) specialName[totalOrderCount] = "*���������ڿ������";
		if (specialList[totalOrderCount] == 4) specialName[totalOrderCount] = "*���ڳ�������";
		if (specialList[totalOrderCount] == 5) specialName[totalOrderCount] = "*�ӻ�ο������";	
		
		printf("������ %d �� �Դϴ�.\nƼ�� �߱��� �����մϴ�. �����մϴ�.\n", price);
		
		priceList[totalOrderCount] = price;
		
		
}

//�ֹ� �߰� �ݺ�
int inputAddOrder(){
	while (1){ //�ֹ� �߰� �ݺ�
		printf("��� ����(1: ���ο� �ֹ�, 2: ���α׷� ����):");
		scanf("%d", &addOrder);
		  
		if (addOrder == 1 || addOrder == 2)
			return addOrder;
		else
			printf("�ٽ� �Է��ϼ���.\n");		
		}
}

void printResult(){
	printf("===================��������==================\n\n");
	
	int sum = 0;
	
	for (int i = 0; i < totalOrderCount; i++){
		printf("%5s %5s x %3d %10d�� %10s\n", ticketName[i], ageName[i], numList[i], priceList[i], specialName[i]);
		sum += priceList[i];
		printf("\n");
		}
		
	printf("\n����� �Ѿ��� %d���Դϴ�.\n\n=============================================\n", sum);
}

int main()
{	
	while(addOrder==1){ 
		ticketChoice();
		inputID(); 
		inputTicketNum(); 
		inputDiscount();
		totalOrderCount ++;
		addOrder = inputAddOrder();
	}
		printResult();
 		
return 0;	

}			

