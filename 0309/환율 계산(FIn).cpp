#include <stdio.h>
#include <math.h>

int main()
{
	int won;
	int num; 
const	float USD = 1194.50; //상수로 값을 저장한다 (상수는 다 대문자로 저장) 
		float JPY = 1101.48;
		float EUR = 1392.26;
		
	printf("환전을 원하는 금액을 입력하세요(원화):");
	scanf("%d", &won);
	printf("환전할 외화를 선택하세요(1:USD, 2:JPY, 3:EUR):");
	scanf("%d", &num);
	
	if(num == 1) {
	printf("기준 환율: %.2f\n" , USD);
	printf("환전 결과" );
	
	float a = won / USD; // a=환전하는 금액 
	float b = (a - floor(a)); // b= 소수점 밑 달러
		
	printf("달러:%g달러\n", floor(a)); // 소수점 밑 내림, .0없애기 
	
	if (a == floor(a))	// 환전하는 금액이 딱 나누어 떨어지면 거스름돈 없음 
	printf("거스름돈:0원");
  	
	else// 소수점 밑으로 달러가 남으면    
	printf("거스름 돈:%g원\n", floor((b*USD)*0.1)/0.1); // 달러 * 환율= 거스름 돈 (일의 자리 내림) 
	
	int change = floor((b*USD)*0.1)/0.1; //거스름 돈 1590원 
	int thousand = floor(change * 0.001); //천원권 갯수 1개 
	printf("천원권:%d장\n", thousand); // 왜 %d인데 소주점 아래 사라짐? int라서 
		
	int hundredChange = abs((thousand * 1000) - change); //몇 백원 단위 잔돈 590원 
	int hundred = floor(hundredChange * 0.01); //백원 단위 잔돈 갯수 5개 

	if (hundred == 5) //오백원일 때 
	printf("오백원:1개\n");	
	else if (hundred > 5) //오백원 이상일 때 
	printf("오백원:1개\n백원:%d개\n", hundred-5);
	else if (hundred < 5) // 오백원 미만일 때 
	printf("오백원:0개\n백원:%d개\n", hundred);	
	
	int tenChange = abs((hundred * 100) - hundredChange); //몇 십원 단위 잔돈 90원 
	int ten = floor(tenChange * 0.1); // 십원 갯수 
	
	printf("십원:%d개\n", ten);
}
	if(num == 2) {
	printf("기준 환율: %.2f\n" , JPY);
	printf("환전 결과" );
	
	float c = won / (JPY*100); 
	float d = (c - floor(c));  
		
	printf("엔:%g엔\n", floor(c)); // 소수점 밑 내림, .0없애기 
	
	if (c == floor(c))	// 환전하는 금액이 딱 나누어 떨어지면 거스름돈 없음 
	printf("거스름돈:0원");
  	
	else// 소수점 밑으로 엔화가 남으면    
	printf("거스름 돈:%g원\n", floor((d*JPY)*0.1)/0.1); // 엔화 * 환율= 거스름 돈 (일의 자리 내림) 
	
	int change = floor((d*JPY)*0.1)/0.1; //거스름 돈 660원 
	int thousand = floor(change * 0.001); //천원권 갯수 1개 
	printf("천원권:%d장\n", thousand); // 왜 %d인데 소주점 아래 사라짐? int라서 
		
	int hundredchange = abs((thousand * 1000) - change); //몇 백원 단위 잔돈 590원 
	int hundred = floor(change * 0.01); //백원 단위 잔돈 갯수 5개 

	if (hundred == 5) //오백원일 때 
	printf("오백원:1개\n백원:0개\n");	
	else if (hundred > 5) //오백원 이상일 때 
	printf("오백원:1개\n백원:%d개\n", hundred-5);
	else if (hundred < 5) // 오백원 미만일 때 
	printf("오백원:0개\n백원:%d개\n", hundred);	
	
	int tenchange = abs((hundred * 100) - hundredchange); //몇 십원 단위 잔돈 90원 
	int ten = floor(tenchange * 0.1); // 십원 갯수 
	
	printf("십원:%d개\n", ten);	
}
	if(num == 3) {
	printf("기준 환율: %.2f\n" , EUR);
	printf("환전 결과" );
			
 	float e = won / EUR; 
	float f = (e - floor(e)); 
		
	printf("유로:%g유로\n", floor(e));
	
	if (e == floor(e))
	printf("거스름돈:0원");
  	
	else   
	printf("거스름 돈:%f원\n", floor((f*EUR)*0.1)/0.1);
	
	int change = floor((f*EUR)*0.1)/0.1;
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
}
	
return 0;	 
}

