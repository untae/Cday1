#include <stdio.h>

void main3() {



	int num1;
	float num2;
	char data;
	char data1[256];


	printf("숫자를 입력하세요");
	scanf_s("%d", &num1);
	printf("num1에 들어간 숫자는 %d\n", num1);
	
	printf("실수를 입력하세요");
	scanf_s("%f", &num2);
	printf("num2에 들어간 실수는 %f\n", num2);
	
	printf("문자를 입력하세요");
	getchar();
	scanf_s("%c", &data, sizeof(data));
	printf("문자는 %c\n", data); 

	printf("문자열를 입력하세요");
	scanf_s("%c", &data1, 256);
	printf("문자는 %c\n", data1); 







}