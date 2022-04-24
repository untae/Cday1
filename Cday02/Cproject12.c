#include <stdio.h>

void main() {

	// 조건 연산자
	// (3 > 1) ? printf("ok") : printf("no");

	// 1. 입력 받아서 20이상이면 성인 20미만이면 미성년자

	int age;

	// printf("나이를 입력하세요>>>");
	// scanf_s("%d", &age);

	// (age > 20) ? printf("성인입니다") : printf("미성년자입니다");

	printf("당신의 나이를 입력하세요>>>");
	scanf_s("%d", &age);
	(age >= 20) ? printf("당신의 나이는 %d 이고, 요금은 1250원 입니다", age) : printf("당신의 나이는 %d 이고, 요금은 800원 입니다",age);


	 int heg;

	printf("\n키를 입력하세요>>>");
	scanf_s("%d", &heg);
	
	(age > 12 && heg >= 120) ? printf("놀이기구에 탑승할 수 있습니다") : printf("놀이기구에 탑승할 수 없습니다");


}