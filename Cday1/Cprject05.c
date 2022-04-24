#include <stdio.h>


void main() {

	int num;
	float num1;
	char var1;
	char var2[50] = "일요일";   // 변수 선언 + 대입 : 초기화 (초기값 설정) 이라고 한다

	num = 17;
	num1 = 17.456;
	var1 = 'L';
	// var2 = "일요일";


	printf("정수는 %d\n", num);
	printf("실수는 %.3f\n", num1);   // .3f 3번째 자리까지 표현
	printf("문자는 %c\n", var1);
	printf("문자열은 %s\n", var2);

	//여려변수 출력

	printf("%d,%.3f, %c,%s\n", num, num1, var1, var2);


}