#include <stdio.h>

int main()
{ //numberOne, numberTwo 알기 쉽게 길게 씀 (변수는 소문자, 단어 대문자로 시작) 
    unsigned char num1 = 200;
	short num2 = 30000; 
    int num3 = -234567890;
    long num4 = 1234567890;
    long long num5 = -1234567890123456789;
    
    printf("%u %d %d %ld %lld\n", num1, num2, num3, num4, num5);
    
	
        return 0;
}
