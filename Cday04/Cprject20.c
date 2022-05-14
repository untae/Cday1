#include <stdio.h>


void main1() {

	// 제어문 : 조건문, 반복문
	// 반복 횟수를 지정하기 위해서 플래그가 필요

	int i = 0;
	char a[12] = "hello world";
	//while(i < 5){
	
	for (i = 0; i < 5; i++){
		if (i == 5) {
			break;
		}
		
		printf("\n %d번 %s\n",i, a);
	
	
	}
	
	
	//											//조건이 맞으면 계속 실행할 문장;
	//i++;									// i = i + 1
	//}


	/*int i = 0;
	int sum = 0;
	while (i < 11) {
		sum += i;
		i++;
	}

	printf("%d", sum);*/


	//int i = 1;
	//int num;
	//int sum = 0;
	//printf("합칠 숫자를 입력하세요");
	//scanf_s("%d", &num);

	///*while (i <= num) {
	//	sum = sum + i;
	//	i++;*/
	////}

	///*for (int i = 0; i <= num; i++) {
	//	sum = sum + i;

	//}
	//{*/

	//}



	//printf("1에서 %d까지의 합은 %d", num, sum);


	// break : 반복문을 끝냄
	// continue :  1회성 취소, 밑에 있는 문장을 실행하지 않고 조건 검사하는 곳으로 이동





}











