#include <stdio.h>

// 받은 변수를 제곱하는 함수
void myPow(int *num) {
	// num == main의 num1
	*num = (*num) * (*num);
}

int main() {
	//정수형 변수 1개를 만든뒤
	int num = 3;
	
	// 포인터 변수에 담아서

	int *num1 = &num;

	//제곱하는 함수에 넘겨서 사용

	myPow(&num);

	// 역참조해서 프린드


	printf("%d", num);
}

// 선언할때 * : 포인터 변수 선언
// 사용할때 * : 역참조
// & : 주소의 값