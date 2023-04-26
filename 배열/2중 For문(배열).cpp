#include <stdio.h>

int main() {
    int n = 8;  // 정사각행렬의 크기
    int matrix[n][n];  // 정사각행렬

    // 행렬 요소 출력  
    for (int i = 0; i < n; i++) //j=8일때 (i=1 다음 행으로 넘어감) 
        {
		for (int j = 0; j < n; j++)  //j=8일때 탈출  
            {
			matrix[i][j] = (i * n) + j + 1;
        }
    }

    // 주대각선 요소 출력
    printf("주대각선 요소: ");
    for (int i = 0; i < n; i++) 
		{ 
        printf("%d ", matrix[i][i]); //빠져나올 때 i+1이 됨  
    }
    printf("\n");

    return 0;
}


