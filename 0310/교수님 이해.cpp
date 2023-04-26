#include <stdio.h>
#include <time.h>
int main()
{
    long long inputNumber;
    int inputYear, inputMonth, inputDay;
    int age;
    int flag;
    
    scanf("%lld", &inputNumber);
       
    time_t t = time(NULL);  
    struct tm *now = localtime(&t);  
    int todayYear = now->tm_year + 1900;  
    int todayMonth = now->tm_mon + 1;  
    int todayDay = now->tm_mday;  
	
	 
	inputYear = inputNumber / 100000000000; // ID_YEAR_MASK
	inputNumber -= inputYear * 100000000000; // 생년*100000000000을 주민번호에서 뺀다 
	inputMonth = inputNumber / 1000000000; //04132000000 에서 나누면 04 남음 
	inputNumber -= (long long)((long long)inputMonth * 1000000000);
	inputDay = inputNumber / 10000000;
	inputNumber -= (long long)((long long)inputDay * 10000000);
	
	printf("%d\n", inputYear);
	printf("%lld\n", inputNumber);
	printf("%d\n", inputMonth);
	printf("%d\n", inputDay);
	
	return 0;
}
