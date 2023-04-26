#include <stdio.h>
#include <math.h>

int main()
{ 
    float a, b, c;

    printf("a,b,c 입력:");
    scanf("%f %f %f", &a, &b, &c); 
    
    if (a == 0)  // 해가 없으면 종료 
    {
    	printf("해가 없습니다.");
    	return 1;
	}
    
    float discriminant = pow(b,2) - 4*a*c; 
        
    if (discriminant >0) //두 실근 
    {
    	float x1 = (-b + sqrt(discriminant)) / (2*a);
    	float x2 = (-b - sqrt(discriminant)) / (2*a);
    
    	printf("결과는x1=%.2f, x2=%.2f", x1, x2);
	}

	else if (discriminant == 0) //중근 
	{
    	float x3 = -b/(2*a);   	
    	printf("결과는 %.2f", x3);
	}

    else if (discriminant <0) // 허근 
    {
    	printf("해가 없습니다.");
	}
	
	  return 0;
}

