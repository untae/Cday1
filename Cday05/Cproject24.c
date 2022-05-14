#include <stdio.h>
//  함수 : 코드를 저장하는 기술(기능단위로 저장)
//넘겨줄땐 ()
// 결과를 받을땐 return

//int print(int var) {
//	printf("프린트 함수 실행되었습니다");
//
//
//	return var-100;
//}

//sum 함수 인자는 2개, 리턴값은 두개를 더한 값으로

int Sum2(int var1, int var2) {

	return var1 + var2;
}



int main24() {
	int result1 = Sum2(10, 20);
	printf("\n%d\n",result1);

	return 0;

}

