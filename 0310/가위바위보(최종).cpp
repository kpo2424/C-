#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	
	int computer, user; 
	int result; // 0:�� �� 1: ���� �� 2: ��� 
	
	while (1){ //���� ����.  
	printf("����(0), ����(1), ��(2) �� �ϳ��� �����ϼ���:");
	scanf("%d", &user);

	if (user == 0 || user == 1 || user == 2) {//�ݺ��� Ż��  
	break;
	}
	else{
		printf("�ٽ� �Է����ּ���.\n");
	}
	}
	 computer = rand() % 3; //��ǻ���� ���� ��°� 
	 printf("��ǻ��:"); 

	switch(computer){ //���� 
	 	case 0:printf("����\n"); break; //����(��)�� 0�϶� ��°� 
	 	case 1:printf("����\n"); break;
	 	case 2:printf("��\n"); break;
	 	}
	 	
	if (computer == user){ //��� �Ǵ� 
		result = 2;
		}
	else if (computer == 2 && user == 0 || computer == 0 && user == 1 || computer == 1 && user == 2){
	 	result = 1;	
		}
	else{
	 	result = 0;	
		}
		 
	switch(result){ //��� ó�� 
		case 0:printf("��ǻ�� ��\n"); break;
	 	case 1:printf("����� ��\n"); break;
	 	case 2:printf("���º�\n"); break;
	 	}
 
	return 0;
}
