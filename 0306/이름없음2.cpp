#include <stdio.h>

int main()
{ //numberOne, numberTwo �˱� ���� ��� �� (������ �ҹ���, �ܾ� �빮�ڷ� ����) 
    unsigned char num1 = 200;
	short num2 = 30000; 
    int num3 = -234567890;
    long num4 = 1234567890;
    long long num5 = -1234567890123456789;
    
    printf("%u %d %d %ld %lld\n", num1, num2, num3, num4, num5);
    
	
        return 0;
}
