#include <stdio.h>

int resultPlus, resultMinus, resultMul, resultDiv;

int plus(int inputOne, int inputTwo);//void �ؿ� �Ÿ� �տ� �������ָ� �ڿ� �־ �ν��� ��  
int minus(int inputOne, int inputTwo);
int mul(int inputOne, int inputTwo);
int div(int inputOne, int inputTwo);
void printAll(int a, int b, int resultPlus, int resultMinus, int resultMul, int resultDiv);
 
 
int main() // int main �տ� viod�� ��� ��  
{
	//�����  
	int a;
	int b;
	
	//�Է�  
	a = 3;
	b = 2;
	
	//���
	resultPlus = plus(a, b);
	resultMinus = minus(a, b);
	resultMul = mul(a, b);
	resultDiv = div(a, b);
	
	//��� 
	printAll(a, b, resultPlus, resultMinus, resultMul, resultDiv);
	return 0;

}

//main���� ȣ���ؼ� ���  
int plus(int inputOne, int inputTwo){
	int result = inputOne + inputTwo;
	return result; // return�� �ϳ��� ��
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


void printAll(int a, int b, int resultPlus, int resultMinus, int resultMul, int resultDiv){//������ �� ������ߵ�  
		 
	printf("%d + %d = %d\n", a, b, resultPlus);
	printf("%d - %d = %d\n", a, b, resultMinus);
	printf("%d * %d = %d\n", a, b, resultMul);
	printf("%d / %d = %d\n", a, b, resultDiv);
}
