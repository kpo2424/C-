#include <stdio.h>

int main()
{ 
    int x1, y1;
	int x2, y2;
	int x3, y3;
	
    printf("P1(x,y):");  
	scanf("%d %d", &x1, &y1);
    printf("P2(x,y):");  
	scanf("%d %d", &x2, &y2);
	printf("P3(x,y):");  
	scanf("%d %d", &x3, &y3);
	
	int area = (x1-x3) * (y1-y2) * 0.5;
	
	printf("삼각형의 넓이는 %d입니다.\n", area);
	
        return 0;
}

