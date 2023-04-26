#include<stdio.h>

//(나라) 별 기준 환율 함수
float getExchangeRate(int country) {   
    float exchangerate[11] = {1320.90, 959.44, 1391.54, 951.90, 190.14, 23.78, 1589.98, 869.62, 812.28, 17.35}; //나라 별 환율 선언  
    //printf 들어가는 자리  
    return exchangerate[country-1]; //반환값(출력값) = 기준 환율   
}

//(나라) 별 통화  
char* getCurrency(int country){  
	char* stringEx[11] = {"달러", "엔", "유로", "캐나다달러", "위안", "폐소", "유로", "호주달러", "뉴질랜드달러", "루블" };
	return stringEx[country-1];
}


int main()
{
    float won, change;
    float money;
    int country;
    int thousand, fivehundred, hundred, ten; 

    printf("환전을 원하는 금액을 입력하세요(원화) : ");
    scanf("%f", &won); 

    printf("환전할 외화를 선택하세요(1:USD, 2:JPY, 3:EUR, 4:CAD, 5:CNY, 6:PHP, 7:GBP, 8:AUD, 9:NZD, 10:RUB):");
    scanf("%d", &country);
	
	//**기준 환율 함수 //(나라)별로 환율 바뀜 
    printf("기준 환율:%.2f\n", getExchangeRate(country));   
    
    //거스름돈 계산  
    money = (float)won/getExchangeRate(country);
    change = won-(int)money*getExchangeRate(country);
    change = (int)(change/10)*10;
	//**(나라)별 통화  
    if(country == 2) { //일본일때  
        printf("환전 결과\n%s :%d\n거스름돈:%d원\n", getCurrency(country), (int)(money*100), (int)change);
    }
    else {
        printf("환전 결과\n%s:%d\n거스름돈:%d원\n", getCurrency(country), (int)money, (int)change);
    }
	
	//거스름돈 갯수  
    thousand = (int)change / 1000;
    fivehundred = ((int)change % 1000) / 500;
    hundred = ((int)change % 500) / 100;
    ten = ((int)change % 100) / 10;

    printf("천원권 : %d개\n오백원 : %d개\n백원 : %d개\n십원 : %d개", thousand, fivehundred, hundred, ten);

    return 0;
}

