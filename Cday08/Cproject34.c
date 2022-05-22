#define _CRT_SECURE_NO_WARNINGS
#define PI 2
#include <stdio.h>

//함수 : 코드를 저장하는 기술(기능 단위로 저장)

int information(int num) {
	if (num == 1) {
		printf("1번 선택\n");
		return 1;
	}
	else if (num == 2) {
		printf("2번 선택\n");
		return 2;
	}
	else
	{
		printf("잘못 입력\n");
		return -1;
		printf("죽은 코드\n");
	}
	return 0;
	printf("죽은 코드\n");
	printf("죽은 코드\n");
}



int main34() {
	int num = 0;
	scanf("%d", &num);
	num = information(num);
	printf("%d\n", num);


	return 0;
}