#include <stdio.h>
#include <math.h>

int main()
{
	int won;
		
	printf("환전을 원하는 금액을 입력하세요(원화):");
	scanf("%d", &won);
	printf("기준 환율:1392.26\n환전 결과\n");
	
	float a = won / 1392.26; 
	float b = (a - floor(a)); 
		
	printf("유로:%g유로\n", floor(a));
	
	if (a == floor(a))
	printf("거스름돈:0원");
  	
	else   
	printf("거스름 돈:%g원\n", floor((b*1392.26)*0.1)/0.1);
	
	int change = floor((b*1392.26)*0.1)/0.1;
	int thousand = floor(change * 0.001); 
	printf("천원권:%d장\n", thousand);
		
	int hundredchange = abs((thousand * 1000) - change); 
	int hundred = floor(hundredchange * 0.01);

	if (hundred == 5)
	{printf("오백원:1개\n");}	
	else if (hundred > 5)
	{printf("오백원:1개\n백원:%d개\n", hundred-5);}
	else if (hundred < 5) 
	{printf("오백원:0개\n백원:%d개\n", hundred);}	
	
	int tenchange = abs((hundred * 100) - hundredchange);
	int ten = floor(tenchange * 0.1); 
	
	printf("십원:%d개\n", ten);
	
return 0;	 
}

