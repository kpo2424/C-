#include <stdio.h>

int main() 
{
    int num, i;
    printf("���� ����� �ұ��? ");
    scanf("%d", &num);
	
    for (i = 1; i <= num; i++) 
	{	
		int count = 0; //�ڸ����� �˻��� ���� 
		int n = i; //while�� �ȿ� ���ǵż� �ݺ��� �������� �ʱ�ȭ ������� ��  
		 
		while (n > 0) // n(�����ڸ�)�� 0�� �Ǹ� Ż��  
		{ 
            if (n % 10 == 3 || n % 10 == 6 || n % 10 == 9) 
			{
                count++; // �ڸ����� 3,6,9�� ������ +1 
            }
            n /= 10; // �ڸ��� Ȯ��(���� �ڸ�, ���� �ڸ� �˻��ϴ� ��)  ���� �ڸ��� 0�� ����  
    	}

        if (count == 1) {
            printf("¦\n");
        } 
		else if (count == 2) {
            printf("¦¦\n");
        } 
		else if (count == 3) {
            printf("¦¦¦\n");
        } 

		else {
            printf("%d\n", i);
        }
	}
    return 0;
}

