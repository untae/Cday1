#include <stdio.h>

void main() {
	// printf("Hello");
	/*
	여러줄 주석
	bit < byte < KByte < MByte < GByte <TByte
	1bit : 0 또는 1(한글자)
	2bit : 00, 01,10,00 중 하나


	== 자료형 ==  "법"
	char : 1byte (-128 ~ 127)				: 한글자
	short : 2byte (-3만2천 ~ 3만 2천)
	int : 4byte (-21억 ~ 21억)				: 소수점 없는 숫자(정수)
	long long : 8byte
	float : 4byte								: 소수점 있는 숫자(숫자)
	double : 8byte       ==> %lf

	C 언어 : 옛날 컴퓨터가 아주 성능이 나쁘고 용량이 작을 때 만들어진 언어


	== 변수 == 저장공간
	변수  : 변하는 수 (수학)
	프로그래밍에서 변수 : 저장공간 

	자료형 저장공간의 이름 = 저장할 값;

	*/

	char var1 = 'a';  //1byte 공간에 a 라는 문자를 저장
	int var2 = 3;		//4byte 공간에 3 라는 숫자를 저장
	float var3 = 3.3f;	//4byte 공간에 3.3 라는 숫자를 저장
	printf("숫자는 %d!\n", var2);		// 숫자는 변수명 d		-  정해진 약속
	printf("문자는 %c!\n", var1);		// 문자는 변수명 c		-  정해진 약속
	printf("실수는 %f!\n", var3);		// 실수는 변수명 f		-  정해진 약속


	char var4[30] = "안녕하세요 반갑습니다";  // 1byte 공간을 256ro dusruf
	printf("문자열은 %s", var4);    // 문자열은 변수명 s		-  정해진 약속

	// 자료형 변수명;

	int num;				// 변수 선언
	num = 5;			// 대입(집어 넣음)   //오른쪽에 있는 값을 왼쪽에 넣어주세요
	num = 8;
	num = 1;
	printf("%d", num);


	int num2 = 3132123132;  // 변수 선언 + 대입 : 초기화 (초기값 설정)



}
