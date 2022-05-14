#include <stdio.h>

// SUM 이라는 이름의 함수
void Sum(int var1, int var2, int var3) {
	printf("%d\n", var1+var2+var3);
}

void Sub(int var1, int var2) {
	if (var1 < 0) {
		var1 = var1 * -1;
	}
	if (var2 < 0) {
		var2 = var2 * -1;
	}
	printf("%d\n", var1 - var2);
}

void Div(int var1, int var2) {

	
	float div = var1 / (float)var2;
	if (var2 == 0) {
		div = 0;
	}
	printf("%.2f\n", div);
}




	// 함수 : 코드를 저장하는 기술 ( C언어에서 주어지는 문법으로는 할 수 없는 계산을 개발자가 직접 만드렁서 사용한다)
	// 기능 단위로 저장, 소괄호가 붙어있음
void main111() {

	Sum(50, 20, 34);
	Sum(30, 20, 99);
	Sum(40, 20, 326);


	Sub(7456, 465);
	Sub(-10, -5);
	Sub(10, -5);

	Div(50, 25);
	Div(50, 0);
	Div(50, 23);


}