#include <stdio.h>

int main() {
    int n = 8;  // ���簢����� ũ��
    int matrix[n][n];  // ���簢���

    // ��� ��� ���  
    for (int i = 0; i < n; i++) //j=8�϶� (i=1 ���� ������ �Ѿ) 
        {
		for (int j = 0; j < n; j++)  //j=8�϶� Ż��  
            {
			matrix[i][j] = (i * n) + j + 1;
        }
    }

    // �ִ밢�� ��� ���
    printf("�ִ밢�� ���: ");
    for (int i = 0; i < n; i++) 
		{ 
        printf("%d ", matrix[i][i]); //�������� �� i+1�� ��  
    }
    printf("\n");

    return 0;
}


