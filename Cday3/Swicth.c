#include <stdio.h>


void main() {

	int num = 2;

	switch (num)  // 옆에 소괄호 안에 있는 갑이 일치하면 해당 부분만 실행한다
	{
	case 0:
		printf("선택은 0번 입니다");
		break;
	case 1:
		printf("선택은 1번 입니다");
		break;
	case 2:
		printf("선택은 2번 입니다");
		break;
	default:
		printf("없어");

	}
}