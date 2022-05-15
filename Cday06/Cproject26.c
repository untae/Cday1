#include <stdio.h>

int main26() {
	//배열 (변수를 나열 보기좋게)

	//char c1 = 'H';
	//char c2 = 'E';
	//char c3 = 'L';
	//char c4 = 'O';

	char hello[5] = { 'h','e','l','l', 'o' };
	printf("% s\n", hello);

	char str[6] = "hello";
	printf("% s\n", str);



	// 출석번호 

	//int num1 = 1;
	//int num2 = 2;
	//int num3 = 3;
	//int num4 = 4;




	int num[10] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", num[i]);
	}

	// 자료형 변수명[갯수] = {1,2,3,4};




	return 0;


}