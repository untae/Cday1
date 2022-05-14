#include <stdio.h>

void main5() {

	int value = 0;
	printf("숫자를 입력하세요>>>");
	scanf_s(" %d", &value);
	//if (value > 10) {
		//printf("value는 10보다 큰수 입니다. \n");

	//}else{
		//printf("value는 15보다 작은 수 입니다.\n");

	//}


	//if (value % 2 == 0) {
		//printf("value는 짝수입니다.\n");

	//}
	//else {
		//printf("value는 홀수입니다.\n");
	//}

	if (value < 0) {
		printf("value는 음수입니다.\n");

	}
	else {
		printf("value는 양수입니다.\n");
	}
	


	printf("프로그램 종료");
}