#include <stdio.h>


void main11() {

	//int age;
	//
	//printf("나이를 입력하세요");
	//scanf_s("%d", &age);

	//if (age >= 20) {
	//	printf("나이는 %d살이고, 성인입니다", age);
	//}else if(age >= 14){
	//	printf("나이는 %d살이고, 청소년입니다", age);
	//}else {
	//	printf("나이는 %d살이고, 어린이입니다", age);
	//}

	

	int year = 0;
	printf("연도를 입력하세요");
	scanf_s("%d", &year);

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		printf("%d년은 윤년입니다", year);

	}
	else
	{
		printf("%d년은 윤년이 아닙니다", year);
	}




}