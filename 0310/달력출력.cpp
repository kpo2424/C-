#include <stdio.h>

int main(){
	int year, month;
	printf("�⵵ �Է�:");
	scanf("%d", &year);
	
	if (year == 0)
	{
	printf("�����մϴ�.");
	}
	else 	
	{
	printf("�� �Է�:");
	scanf("%d", &month);

	printf("\n======%d�� %d��======\n", year, month);
	printf("�� �� ȭ �� �� �� ��\n");
	
	// ���� �ޱ����� �� �� �� ���
	int total_days = 0;
    for (int i = 1900; i < year; i++) //�⵵ �� �� �� ��� 
	{
        if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) //������ �� 
		{
            total_days += 366;
        } 
		else 
		{
            total_days += 365;
        }
	}  
	//printf("�� �� �� �� ���: %d\n", total_days);
	
	for (int i = 1; i < month; i++) //���� �ޱ��� �� �� �� ��� 
	{ 
	    if (i == 2) //2�� �� (���� ���) 
		{
          	 if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) //������ ��  
			 {
                total_days += 29;
            	} 
			else
			 {
                total_days += 28;
            	}
        } 
		else if (i == 4 || i == 6 || i == 9 || i == 11) //30���� �� 
		{
            total_days += 30;
        } 
		else //�� �� 31���� �� 
		{
            total_days += 31;
        }
    }
    //printf("�� �� �� �� ���: %d\n", total_days); 
    
    //�Է� �� 1���� ���� ���
	int first_day_of_month = (total_days ) % 7;
	//printf("1��: %d\n", first_day_of_month + 1); // 0���� ���� �Ͽ��� �����̴ϱ� +1 
	
	 //�Է��� ���� ��¥ �� ���
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
    //printf("�Է� ���� ��¥ ��: %d\n", days_in_month);
    
    //�޷� ���
	for (int i = 0; i < first_day_of_month; i++)  //1�� ���� �� ���� ���  
	{
        printf("   ");
    }
     
	 for (int i = 1; i <= days_in_month; i++) // ��¥ ���(1-30)
	 {
        printf("%2d ", i); //2d�� 2�ڸ� ���� ������ ���� 2ĭ, 2�ڸ����� ũ�� �״�� ���  
        
        if ((i + first_day_of_month) % 7 == 0) //����ϵǸ� �� ���  
		{
            printf("\n");
        }
	}
}
	return 0;
}
