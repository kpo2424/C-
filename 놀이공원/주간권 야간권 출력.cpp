#include <stdio.h>

int main()
{	

	char ticket[2][10] = {"�ְ���", "�߰���"};
	int choice;
	int choose_continue;  
	

	while(1);{
		
	//���� �Է�  
	printf("������ �����ϼ���.\n");  

	for (int i = 0; i < 2; i++) {
        printf("%d. %s\n", i+1, ticket[i]); // ���� ��� (1.�ְ��� 2.�߰���)
    }
	
	scanf("%d", &choice);
	
	if (choice < 1 || choice > 2) {
        printf("�߸��� �Է��Դϴ�.\n");
    } 

		
	printf("��� �߱� �ϰڽ��ϱ�?\n1. Ƽ�� �߱�\n2. ����\n");
	scanf("%d", choose_continue); 
	
    if (choose_continue == 1){
    	
	}
    
	if (choose_continue == 2){
		printf("Ƽ�� �߱��� �����մϴ�. �����մϴ�.\n");
		printf("\n==========��������==========\n");
	}

	for (int i = 0; i < 1; i++) {
    printf("%s\n", ticket[choice-1]); // Ƽ�� �ְ��� �߰��� ���  
  	}
}
    return 0;
}



