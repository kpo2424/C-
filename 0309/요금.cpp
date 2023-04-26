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
	
	printf("권종을 선택하세요.\n"); // 권종 선택  
	printf("1. 주간권\n");
	printf("2. 야간권\n");
	scanf("%d", &ticket);
	

	printf("주민번호를 입력하세요.\n"); // 주민번호 선택 
	scanf("%lld", &idNum);

	// 현재 날짜 정보 추출
    time_t t = time(NULL);  
    struct tm *now = localtime(&t);  
    todayYear = now->tm_year + 1900;  
    todayMonth = now->tm_mon + 1;  
    todayDay = now->tm_mday;  
    
	// 생년월일 추출 
	birthYear = (idNum / 10000000)/10000; 
    birthMonth = (idNum / 10000000) % 10000;
    birthDay = (idNum / 10000000) % 100;
    
    //나이 계산하기 
	age = (todayYear - birthYear) % 100;
	
//	printf("당신의 나이는 %d세입니다.\n", age);

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

	printf("몇 개를 주문하시겠습니까? (최대 10개)\n");
	scanf("%d", &num);

	
	printf("우대사항을  선택하세요.\n"); // 우대사항 선택 
	printf("1. 없음 (나이 우대는 자동처리)\n");
	printf("2. 장애인\n");
	printf("3. 국가유공자\n");
	printf("4. 다자녀\n");
	printf("5. 임산부\n");
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
	
	printf("가격은 %f입니다.", total );
	  
	  
return 0;	
}

