#include <stdio.h>

// ���� ������ �����ϴ� �Լ�
void myPow(int *num) {
	// num == main�� num1
	*num = (*num) * (*num);
}

int main() {
	//������ ���� 1���� �����
	int num = 3;
	
	// ������ ������ ��Ƽ�

	int *num1 = &num;

	//�����ϴ� �Լ��� �Ѱܼ� ���

	myPow(&num);

	// �������ؼ� ������


	printf("%d", num);
}

// �����Ҷ� * : ������ ���� ����
// ����Ҷ� * : ������
// & : �ּ��� ��