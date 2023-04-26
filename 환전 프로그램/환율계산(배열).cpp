#include<stdio.h>
int main()
{
	float won, change;
	float money;
	float exchangerate[11] = {1320.90, 959.44, 1391.54, 951.90, 190.14, 23.78, 1589.98, 869.62, 812.28, 17.35};
	char* stringEx[11] = {"달러", "엔", "유로", "캐나다달러", "위안", "폐소", "유로", "호주달러", "뉴질랜드달러", "루블" };
	int country;
	int thousand, fivehundred, hundred, ten; 
	
	printf("환전을 원하는 금액을 입력하세요(원화) : ");
	scanf("%f", &won); 
	
	printf("환전할 외화를 선택하세요(1:USD, 2:JPY, 3:EUR, 4:CAD, 5:CNY, 6:PHP, 7:GBP, 8:AUD, 9:NZD, 10:RUB):");
	scanf("%d", &country);
	
		if(country == 2)	
		{
			printf("기준 환율:%.2f\n", exchangerate[country-1]);//[]안은 0부터 시작인데 1부터 입력 받으니까  
			
			money = (float)won/exchangerate[country-1];
			change = won-(int)money*exchangerate[country-1];
			change = (int)(change/10)*10;
		
			printf("환전 결과\n%s :%d\n거스름돈:%d원\n", stringEx[country-1], (int)(money*100), (int)change);
		}
	
		else
		{
			printf("기준 환율:%.2f\n", exchangerate[country-1]);//[]안은 0부터 시작인데 1부터 입력 받으니까  
			
			money = (float)won/exchangerate[country-1];
			change = won-(int)money*exchangerate[country-1];
			change = (int)(change/10)*10;
			
			printf("환전 결과\n%s:%d\n거스름돈:%d원\n", stringEx[country-1], (int)money, (int)change);
		}
		
		thousand = (int)change / 1000;
		fivehundred = ((int)change % 1000) / 500;
		hundred = ((int)change % 500) / 100;
		ten = ((int)change % 100) / 10;
		
		printf("천원권 : %d개\n오백원 : %d개\n백원 : %d개\n십원 : %d개", thousand, fivehundred, hundred, ten);
		
	return 0;
	
}
