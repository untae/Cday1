#include <stdio.h>

void main3() {



	int num1;
	float num2;
	char data;
	char data1[256];


	printf("���ڸ� �Է��ϼ���");
	scanf_s("%d", &num1);
	printf("num1�� �� ���ڴ� %d\n", num1);
	
	printf("�Ǽ��� �Է��ϼ���");
	scanf_s("%f", &num2);
	printf("num2�� �� �Ǽ��� %f\n", num2);
	
	printf("���ڸ� �Է��ϼ���");
	getchar();
	scanf_s("%c", &data, sizeof(data));
	printf("���ڴ� %c\n", data); 

	printf("���ڿ��� �Է��ϼ���");
	scanf_s("%c", &data1, 256);
	printf("���ڴ� %c\n", data1); 







}