#include <stdio.h>    //std : standard   , io : input  & output

void main2() {
	/*
	���� ==  ���
	������ == ����ϱ� ���� ��ȣ
	+ ���ϱ� - ���� * ���ϱ� / ������





	*/ 
	
	int num1, num2;  // ���� ����

	//num1 = 1, num2 = 2;  //����
	//num1 = num2;  // ������ �ִ� num1�̶�� �������(����)�� num2�� ���� �־���
	//num1 = num1; //������ ���� �������� ��



	num1 = 1;
	num2 = 2;

	int sum = num1 + num2;
	int sub = num1 - num2;
	int mul = num1 * num2;
	float div = (float)num1 / num2;

	int ampersand = num1 % num2;   // ������


	printf("%d\n%d\n%d\n%f\n", sum, sub, mul, div);
	//printf(" % d\n", sum);
	//printf(" % d\n", sub);
	//printf(" % d\n", mul);
	//printf(" % .2f\n", div);




}