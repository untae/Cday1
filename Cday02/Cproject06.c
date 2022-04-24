#include <stdio.h>    //std : standard   , io : input  & output

void main2() {
	/*
	연산 ==  계산
	연산자 == 계산하기 위한 기호
	+ 더하기 - 뺴기 * 곱하기 / 나누기





	*/ 
	
	int num1, num2;  // 변수 선언

	//num1 = 1, num2 = 2;  //대입
	//num1 = num2;  // 왼족에 있는 num1이라는 저장공간(변수)에 num2의 값을 넣어줘
	//num1 = num1; //왼쪽은 공간 오른쪽은 값



	num1 = 1;
	num2 = 2;

	int sum = num1 + num2;
	int sub = num1 - num2;
	int mul = num1 * num2;
	float div = (float)num1 / num2;

	int ampersand = num1 % num2;   // 나머지


	printf("%d\n%d\n%d\n%f\n", sum, sub, mul, div);
	//printf(" % d\n", sum);
	//printf(" % d\n", sub);
	//printf(" % d\n", mul);
	//printf(" % .2f\n", div);




}