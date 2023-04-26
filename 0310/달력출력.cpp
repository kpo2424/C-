#include <stdio.h>

int main(){
	int year, month;
	printf("년도 입력:");
	scanf("%d", &year);
	
	if (year == 0)
	{
	printf("종료합니다.");
	}
	else 	
	{
	printf("월 입력:");
	scanf("%d", &month);

	printf("\n======%d년 %d월======\n", year, month);
	printf("일 월 화 수 목 금 토\n");
	
	// 이전 달까지의 총 일 수 계산
	int total_days = 0;
    for (int i = 1900; i < year; i++) //년도 총 일 수 계산 
	{
        if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) //윤년일 때 
		{
            total_days += 366;
        } 
		else 
		{
            total_days += 365;
        }
	}  
	//printf("년 총 일 수 계산: %d\n", total_days);
	
	for (int i = 1; i < month; i++) //지난 달까지 총 일 수 계산 
	{ 
	    if (i == 2) //2월 달 (윤년 계산) 
		{
          	 if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) //윤년일 때  
			 {
                total_days += 29;
            	} 
			else
			 {
                total_days += 28;
            	}
        } 
		else if (i == 4 || i == 6 || i == 9 || i == 11) //30일인 달 
		{
            total_days += 30;
        } 
		else //그 외 31일인 달 
		{
            total_days += 31;
        }
    }
    //printf("달 총 일 수 계산: %d\n", total_days); 
    
    //입력 달 1일의 요일 계산
	int first_day_of_month = (total_days ) % 7;
	//printf("1일: %d\n", first_day_of_month + 1); // 0에서 부터 일요일 시작이니까 +1 
	
	 //입력한 월의 날짜 수 계산
    int days_in_month;
    
    if (month == 2) 
	{
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) 
		{
            days_in_month = 29;
        } 
		else 
		{
            days_in_month = 28;
        }
    } 
	else if (month == 4 || month == 6 || month == 9 || month == 11) 
	{
        days_in_month = 30;
    } 
	else 
	{
        days_in_month = 31;
    }
    //printf("입력 월의 날짜 수: %d\n", days_in_month);
    
    //달력 출력
	for (int i = 0; i < first_day_of_month; i++)  //1일 시작 전 공백 출력  
	{
        printf("   ");
    }
     
	 for (int i = 1; i <= days_in_month; i++) // 날짜 출력(1-30)
	 {
        printf("%2d ", i); //2d는 2자리 보다 작으면 여백 2칸, 2자리보다 크면 그대로 출력  
        
        if ((i + first_day_of_month) % 7 == 0) //토요일되면 줄 띄기  
		{
            printf("\n");
        }
	}
}
	return 0;
}
