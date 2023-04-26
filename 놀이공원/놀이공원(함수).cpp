#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>   // 문자열 처리 함수를 사용하기 위한 헤더 파일

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
	char* ticketName[20] = {"주간권", "야간권"};
	int ageList[10];
	char* ageName[20] = {"노인", "어른", "청소년", "어린이", "영유아" };
	int numList[10];
	int specialList[10];
	char* specialName[20] = {"*우대적용없음", "*장애인우대적용", "*국가유공자우대적용", "*다자녀우대적용", "*임산부우대적용"}; 
	int priceList[10];
	
	int addOrder = 1;

//권종선택 입력 함수  
void ticketChoice(){		
	while (1){
		printf("권종을 선택하세요.\n");  
		printf("1. 주간권\n");
		printf("2. 야간권\n");
		scanf("%d", &ticket);  
		
	if (ticket == 1 || ticket == 2)
   		break;
	else 
   		printf("다시 입력하세요.\n");
	}	

	ticketList[totalOrderCount] = ticket;
	if (ticket == 1) ticketName[0];
	else ticketName[1];
} 	
	
//주민번호 입력 함수 
void inputID() {
   while (true){	
   		printf("주민번호를 입력하세요.(-없이 입력)\n");	
			char id[14]; // 주민번호를 입력받을 문자열 배열
			char birthMonthStr[3]; // 월을 저장할 문자열 배열
			char birthDayStr[3]; // 일을 저장할 문자열 배열
			char birthYearStr[3];
			char flagStr[3];
			
			scanf("%s", id);
			
			birthYearStr[0] = id[0]; //주민번호의 년 부분을 추출하여 year 배열에 넣기  
		    birthYearStr[1] = id[1];
		    birthYearStr[2] = '\0';
		    
		    birthMonthStr[0] = id[2]; //주민번호의 월 부분을 추출하여 month 배열에 넣기  
		    birthMonthStr[1] = id[3];
		    birthMonthStr[2] = '\0';
		    
		    birthDayStr[0] = id[4]; //주민번호의 월 부분을 추출하여 day 배열에 넣기  
		    birthDayStr[1] = id[5];
		    birthDayStr[2] = '\0';
		    
		    flagStr[0] = id[6]; //성별 자리 추출  
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
				//printf("입력한 주민번호의 생년월일은 %s년 %s월 %s일입니다.\n", birthYearStr, birthMonthStr, birthDayStr);
				
		        birthYear = atoi(birthYearStr);
		    	birthMonth = atoi(birthMonthStr);
		    	birthDay = atoi(birthDayStr);
		    	
			    //나이 계산하기
				time_t t = time(NULL);  
			    struct tm *now = localtime(&t);  
			    int todayYear = now->tm_year + 1900;  
			    int todayMonth = now->tm_mon + 1;  
			    int todayDay = now->tm_mday;  
			 
				 //long long age;
				 age = (todayYear - birthYear) % 100; //만 나이  
				 //ageList[totalOrderCount] = age;
				 //printf("당신의 나이는 %lld세입니다.\n", age);
				 break; // if 맞으면 다음 코드로 이동  
			} //if가 맞으면 여기까지 수행  		
			else{
				printf("다시 입력하세요.\n");
			}
	}
	
	ageList[totalOrderCount] = age;
	
	
		//권종 및 나이대별 금액 
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
	
		if(ageList[totalOrderCount] >= 65) ageName[totalOrderCount] = "노인";
		else if (ageList[totalOrderCount]>=19) ageName[totalOrderCount] = "어른";
		else if (ageList[totalOrderCount]>=13) ageName[totalOrderCount] = "청소년";
		else if (ageList[totalOrderCount]>=3) ageName[totalOrderCount] = "어린이";
		else if (ageList[totalOrderCount]<=2) ageName[totalOrderCount] = "영유아";
	
}
			
//티켓 개수 입력 함수  
void inputTicketNum(){
	while (1){ 
		printf("몇개를 주문하시겠습니까? (최대 10개)\n"); 
		scanf("%d", &num);
		  
		if (num >= 1  && num <= 10){
			(price = price * num); 
			break;
		}	
		else{
			printf("다시 입력하세요.\n");				
		}
	}
	numList[totalOrderCount] = num;
}			
			
//우대사항선택 함수
void inputDiscount(){
	while (1){
		printf("우대사항을 선택하세요.\n 1. 없음 (나이 우대는 자동처리)\n 2. 장애인\n 3. 국가유공자\n 4. 다자녀\n 5. 임산부\n"); 
		scanf("%d", &special);
			  
		if (special > 6 || special == 0 ) printf("유효값을 입력하세요.");	
		else if (special == 1) {price = price * 1; break;}	
		else if	(special == 2) {price = price * 0.6; break;}	
		else if (special == 3) {price = price * 0.5; break;}
		else if	(special == 4) {price = price * 0.8; break;}
		else if	(special == 5) {price = price * 0.85; break;}	
		}
		
		specialList[totalOrderCount] = special;		
	
		if (specialList[totalOrderCount] == 1) specialName[totalOrderCount] = "*우대적용없음";
		if (specialList[totalOrderCount] == 2) specialName[totalOrderCount] = "*장애인우대적용";
		if (specialList[totalOrderCount] == 3) specialName[totalOrderCount] = "*국가유공자우대적용";
		if (specialList[totalOrderCount] == 4) specialName[totalOrderCount] = "*다자녀우대적용";
		if (specialList[totalOrderCount] == 5) specialName[totalOrderCount] = "*임산부우대적용";	
		
		printf("가격은 %d 원 입니다.\n티켓 발권을 종료합니다. 감사합니다.\n", price);
		
		priceList[totalOrderCount] = price;
		
		
}

//주문 추가 반복
int inputAddOrder(){
	while (1){ //주문 추가 반복
		printf("계속 진행(1: 새로운 주문, 2: 프로그램 종료):");
		scanf("%d", &addOrder);
		  
		if (addOrder == 1 || addOrder == 2)
			return addOrder;
		else
			printf("다시 입력하세요.\n");		
		}
}

void printResult(){
	printf("===================에버랜드==================\n\n");
	
	int sum = 0;
	
	for (int i = 0; i < totalOrderCount; i++){
		printf("%5s %5s x %3d %10d원 %10s\n", ticketName[i], ageName[i], numList[i], priceList[i], specialName[i]);
		sum += priceList[i];
		printf("\n");
		}
		
	printf("\n입장료 총액은 %d원입니다.\n\n=============================================\n", sum);
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

