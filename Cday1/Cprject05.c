#include <stdio.h>


void main() {

	int num;
	float num1;
	char var1;
	char var2[50] = "�Ͽ���";   // ���� ���� + ���� : �ʱ�ȭ (�ʱⰪ ����) �̶�� �Ѵ�

	num = 17;
	num1 = 17.456;
	var1 = 'L';
	// var2 = "�Ͽ���";


	printf("������ %d\n", num);
	printf("�Ǽ��� %.3f\n", num1);   // .3f 3��° �ڸ����� ǥ��
	printf("���ڴ� %c\n", var1);
	printf("���ڿ��� %s\n", var2);

	//�������� ���

	printf("%d,%.3f, %c,%s\n", num, num1, var1, var2);


}