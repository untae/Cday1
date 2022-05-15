#include <stdio.h>

void print2(int *num) {
	*num = *num + 1;


}

int main() {
	int num = 10;
	int* pNum = &num;   // 포인터 변수 만들겠다
	

	*pNum;     // num의 값 (역참조)

	// * : 포인터 , 주소를 담는 변수 이다
	//& : 주소의 기호
	// 변수앞에 *을 붙이명 역참조 (주소로 값을 사용한다)
	// 

	printf("%d \n", *pNum);
	print2(&num);
	printf("%d \n", num);

	return 0;

	// 자료형 앞에 오는(변수 선언시에 오는) * 은 포인터 변수 선언 (주소를 저장하는 공간을 생성)
	// 변수 사용시 변수앞에 붙이는 *은 역참조 (해당 주소의 값을 가져온다)
	// & : 주소참조 (주소를 가져온다)
}  // 포인터 : 주소에 접근하는 기술