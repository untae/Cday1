#define _CRT_SECURE_NO_WARNINGS
#define PI 2
#include <stdio.h>

//�Լ� : �ڵ带 �����ϴ� ���(��� ������ ����)

int information(int num) {
	if (num == 1) {
		printf("1�� ����\n");
		return 1;
	}
	else if (num == 2) {
		printf("2�� ����\n");
		return 2;
	}
	else
	{
		printf("�߸� �Է�\n");
		return -1;
		printf("���� �ڵ�\n");
	}
	return 0;
	printf("���� �ڵ�\n");
	printf("���� �ڵ�\n");
}



int main34() {
	int num = 0;
	scanf("%d", &num);
	num = information(num);
	printf("%d\n", num);


	return 0;
}