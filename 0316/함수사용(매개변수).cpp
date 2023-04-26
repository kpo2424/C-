#include <stdio.h>

int resultPlus, resultMinus, resultMul, resultDiv;

int plus(int inputOne, int inputTwo);//void 밑에 거를 앞에 선언해주면 뒤에 있어서 인식을 함  
int minus(int inputOne, int inputTwo);
int mul(int inputOne, int inputTwo);
int div(int inputOne, int inputTwo);
void printAll(int a, int b, int resultPlus, int resultMinus, int resultMul, int resultDiv);
 
 
int main() // int main 앞에 viod를 써야 됨  
{
	//선언부  
	int a;
	int b;
	
	//입력  
	a = 3;
	b = 2;
	
	//계산
	resultPlus = plus(a, b);
	resultMinus = minus(a, b);
	resultMul = mul(a, b);
	resultDiv = div(a, b);
	
	//출력 
	printAll(a, b, resultPlus, resultMinus, resultMul, resultDiv);
	return 0;

}

//main에서 호출해서 사용  
int plus(int inputOne, int inputTwo){
	int result = inputOne + inputTwo;
	return result; // return은 하나만 됨
}

int minus(int inputOne, int inputTwo){
	int result = inputOne - inputTwo;
	return result;
}

int mul(int inputOne, int inputTwo){
	int result = inputOne * inputTwo;
	return result;
}

int div(int inputOne, int inputTwo){
	int result = inputOne / inputTwo;
	return result;
}


void printAll(int a, int b, int resultPlus, int resultMinus, int resultMul, int resultDiv){//받을거 다 적어줘야됨  
		 
	printf("%d + %d = %d\n", a, b, resultPlus);
	printf("%d - %d = %d\n", a, b, resultMinus);
	printf("%d * %d = %d\n", a, b, resultMul);
	printf("%d / %d = %d\n", a, b, resultDiv);
}
