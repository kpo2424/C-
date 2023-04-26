#include <stdio.h>

int main()
{	

	char ticket[2][10] = {"주간권", "야간권"};
	int choice;
	int choose_continue;  
	

	while(1);{
		
	//권종 입력  
	printf("권종을 선택하세요.\n");  

	for (int i = 0; i < 2; i++) {
        printf("%d. %s\n", i+1, ticket[i]); // 보기 출력 (1.주간권 2.야간권)
    }
	
	scanf("%d", &choice);
	
	if (choice < 1 || choice > 2) {
        printf("잘못된 입력입니다.\n");
    } 

		
	printf("계속 발권 하겠습니까?\n1. 티켓 발권\n2. 종료\n");
	scanf("%d", choose_continue); 
	
    if (choose_continue == 1){
    	
	}
    
	if (choose_continue == 2){
		printf("티켓 발권을 종료합니다. 감사합니다.\n");
		printf("\n==========에버랜드==========\n");
	}

	for (int i = 0; i < 1; i++) {
    printf("%s\n", ticket[choice-1]); // 티켓 주간권 야간권 출력  
  	}
}
    return 0;
}



