#include <stdio.h>


void main14() {
/*
	int pass = 0;

	printf("비번을 입력 하세요>>>");
		scanf_s("%d", &pass);

		if (pass == 4444) {
			printf("통과");
		}
		else {
			printf("오류");
		}
*/

	int score = 0;
	char grade = 'F';
	printf("점수 입력 하세요>>>");
	scanf_s("%d", &score);

	if (score >= 90) {
		grade = 'A';
	}
	if (score < 90 && score >= 80) {
		grade = 'B';
	}
	if (score < 80 && score >= 70) {
		grade = 'C';
	}
	if (score < 70 && score >= 60) {
		grade = 'D';
	}
	else {
		grade = 'F';
	}

	printf("%c", grade);
}
