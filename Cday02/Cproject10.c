#include <stdio.h>


void main7() {

	int kor=0, mat=0, eng=0;

	printf("kor ������ �Է��ϼ���");
	scanf_s("%d", &kor);
	printf("mat ������ �Է��ϼ���");
	scanf_s("%d", &mat);
	printf("eng ������ �Է��ϼ���");
	scanf_s("%d", &eng);

	int sum = kor + mat + eng;
	float div = sum / 3.0f;


	int num1=0, num2=0;

	printf("num1�� �Է��ϼ���");
	scanf_s("%d", &num1);
	printf("num2�� �Է��ϼ���");
	scanf_s("%d", &num2);

	int sum1 = num1 + num2;
	int sub = num1 - num2;
	int mul = num1 * num2;
	float div1 = (float)num1 / num2;
	int min = num1 % num2;

	//======���-======//
	
	printf("���� : %d ", sum);
	printf("��� : %.2f\n ", div);

	printf("num1 + num2 = %d\n", sum1);
	printf("num1 - num2 = %d\n", sub);
	printf("num1 * num2 = %d\n", mul);
	printf("num1 / num2 = %.2f\n", div1);
	printf("num1 %% num2 = %d\n", min);
	






}