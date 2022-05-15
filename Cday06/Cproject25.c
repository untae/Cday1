#include <stdio.h>


void 함수1(int num) {
	printf("함수1이 호출되었습니다");
	return;

}

int 함수2(char var1, char var2) {
	if (var1 != NULL) {
		printf("\n함수2가 사용되었습니다.");
		return 0;

	}
	else {
		printf("오류");
		return -1;
	}
}

float 함수3() {
	printf("\n함수3이 사용되었습니다.");
	return 3.141592f;

}




int main25() {
	함수1(34);
	함수2('a','b');
	함수3();

	return 0;

}