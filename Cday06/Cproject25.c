#include <stdio.h>


void �Լ�1(int num) {
	printf("�Լ�1�� ȣ��Ǿ����ϴ�");
	return;

}

int �Լ�2(char var1, char var2) {
	if (var1 != NULL) {
		printf("\n�Լ�2�� ���Ǿ����ϴ�.");
		return 0;

	}
	else {
		printf("����");
		return -1;
	}
}

float �Լ�3() {
	printf("\n�Լ�3�� ���Ǿ����ϴ�.");
	return 3.141592f;

}




int main25() {
	�Լ�1(34);
	�Լ�2('a','b');
	�Լ�3();

	return 0;

}