#include <stdio.h>
#include <math.h>

int main()
{
	int won;
		
	printf("환전을 원하는 금액을 입력하세요(원화):");
	scanf("%d", &won);
	printf("기준 환율:1194.50\n환전 결과\n");
	
	float a = won / 1194.50; // a=환전하는 금액 
	float b = (a - floor(a)); // b= 소수점 밑 달러
		
	printf("달러:%g달러\n", floor(a)); // 소수점 밑에 버리고 0없애기 
	
	if (a == floor(a))	// 환전하는 금액이 딱 나누어 떨어지면 거스름돈 없음 
	printf("거스름돈:0원");
  
	else// 소수점 밑으로 달러가 남으면    
	printf("거스름 돈:%g원", floor((b*1194.50)*0.1)/0.1); // 달러 * 환율= 거스름 돈 
	
return 0;	
}

