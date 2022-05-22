#include <stdio.h>

typedef struct Mystruct {

	char name[64];
	int age;

}MS;




int main() {

	char 문자 = 'a';
	int  정수 = 23;
	float 실수 = 3.14f;
	MS 구조체변수 = { "홍길동", 23 };

	/*printf("%d\n", 정수);
	printf("%d\f", 실수);
	printf("%d\s", 문자);
	printf("%d\n", 구조체변수);*/

	// 포인터 변수
	char* 문자열 = "안녕하세요";
	char* 문자주소 = &문자;
	int* 정수주소 = &정수;
	float* 실수주소 = &실수;
	MS* 구조체변수주소 = &구조체변수;

	printf("%d\n", 정수주소);
	printf("%d\n", *정수주소);


	//일반변수
	문자 = 'd';
	정수 = 1;
	실수 = 3.3f;

	printf("%d\n", 정수);

	//역참조 (혹은 사용)

	*문자주소 = 'b';
	*정수주소 = 333;						//역참조 하면 정수니깐 333 출력
	*실수주소 = 314.01f;
	(*구조체변수주소).age = 999;

	printf("%d\n", 정수);    //333

	*정수주소 = (*정수주소)++;

	printf("%d\n", 정수);    //334




	return 0;

}