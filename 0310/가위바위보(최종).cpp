#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	
	int computer, user; 
	int result; // 0:컴 윈 1: 유저 윈 2: 비김 
	
	while (1){ //무한 루프.  
	printf("가위(0), 바위(1), 보(2) 중 하나를 선택하세요:");
	scanf("%d", &user);

	if (user == 0 || user == 1 || user == 2) {//반복문 탈출  
	break;
	}
	else{
		printf("다시 입력해주세요.\n");
	}
	}
	 computer = rand() % 3; //컴퓨터의 랜덤 출력값 
	 printf("컴퓨터:"); 

	switch(computer){ //변수 
	 	case 0:printf("가위\n"); break; //변수(컴)가 0일때 출력값 
	 	case 1:printf("바위\n"); break;
	 	case 2:printf("보\n"); break;
	 	}
	 	
	if (computer == user){ //결과 판단 
		result = 2;
		}
	else if (computer == 2 && user == 0 || computer == 0 && user == 1 || computer == 1 && user == 2){
	 	result = 1;	
		}
	else{
	 	result = 0;	
		}
		 
	switch(result){ //결과 처리 
		case 0:printf("컴퓨터 승\n"); break;
	 	case 1:printf("사용자 승\n"); break;
	 	case 2:printf("무승부\n"); break;
	 	}
 
	return 0;
}
