#include <stdio.h>


void main14() {
/*
	int pass = 0;

	printf("����� �Է� �ϼ���>>>");
		scanf_s("%d", &pass);

		if (pass == 4444) {
			printf("���");
		}
		else {
			printf("����");
		}
*/

	int score = 0;
	char grade = 'F';
	printf("���� �Է� �ϼ���>>>");
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
