#include <stdio.h>

void main99() {

	// �񱳿�����  : ������ 1 Ʋ���� 0 ǥ����

	int num1 = 0, num2 = 0;


	scanf_s("%d",  &num1);
	scanf_s("%d",  &num2);


	//1. ���� == : ������ 1 Ʋ���� 0 ǥ����
	printf("���� %d\n", num1 == num2);
	//2. �ٸ���
	printf("�ٸ��� %d\n", num1 != num2);
	//3. �۴�
	printf("�۴� %d\n", num1 < num2);
	//4. �۰ų� ����
	printf("�۰ų� ���� %d\n", num1 <= num2);
	//5.ũ��
	printf("ũ�� %d\n", num1 < num2);
	//6. ũ�ų� ����
	printf("ũ�ų� ���� %d\n", num1 >= num2);


	// ���迬���� (&& : and, || : or, ! : not)

	int num3 = 0;
	printf("\n �׸��� %d\n", num1 == num2 && num1 == num3 );
	// Ȥ�� or || : �� �Ǵ� �� �ϳ��� �¾Ƶ� �´°� 
	printf("\n Ȥ�� %d\n", num1 == num2 || num1 == num3 );
	//! : �ݴ�� (���̸� �������� �����̸� ������)
	printf("\n not %d\n", !(num1 > num2));

}