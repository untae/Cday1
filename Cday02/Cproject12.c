#include <stdio.h>

void main() {

	// ���� ������
	// (3 > 1) ? printf("ok") : printf("no");

	// 1. �Է� �޾Ƽ� 20�̻��̸� ���� 20�̸��̸� �̼�����

	int age;

	// printf("���̸� �Է��ϼ���>>>");
	// scanf_s("%d", &age);

	// (age > 20) ? printf("�����Դϴ�") : printf("�̼������Դϴ�");

	printf("����� ���̸� �Է��ϼ���>>>");
	scanf_s("%d", &age);
	(age >= 20) ? printf("����� ���̴� %d �̰�, ����� 1250�� �Դϴ�", age) : printf("����� ���̴� %d �̰�, ����� 800�� �Դϴ�",age);


	 int heg;

	printf("\nŰ�� �Է��ϼ���>>>");
	scanf_s("%d", &heg);
	
	(age > 12 && heg >= 120) ? printf("���̱ⱸ�� ž���� �� �ֽ��ϴ�") : printf("���̱ⱸ�� ž���� �� �����ϴ�");


}