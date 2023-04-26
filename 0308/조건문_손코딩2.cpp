#include <stdio.h>
#include <math.h>

int main()
{ 
    float a, b, c;

    printf("a,b,c �Է�:");
    scanf("%f %f %f", &a, &b, &c); 
    
    if (a == 0)  // �ذ� ������ ���� 
    {
    	printf("�ذ� �����ϴ�.");
    	return 1;
	}
    
    float discriminant = pow(b,2) - 4*a*c; 
        
    if (discriminant >0) //�� �Ǳ� 
    {
    	float x1 = (-b + sqrt(discriminant)) / (2*a);
    	float x2 = (-b - sqrt(discriminant)) / (2*a);
    
    	printf("�����x1=%.2f, x2=%.2f", x1, x2);
	}

	else if (discriminant == 0) //�߱� 
	{
    	float x3 = -b/(2*a);   	
    	printf("����� %.2f", x3);
	}

    else if (discriminant <0) // ��� 
    {
    	printf("�ذ� �����ϴ�.");
	}
	
	  return 0;
}

