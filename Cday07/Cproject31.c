#include <stdio.h>

void Swap(int *num1, int *num2) {		//����(���)�Ҷ� �տ� * ���̱�
	int num3 = *num2;		// ������ ���� ���(����)�Ҷ� �տ� * ���̱�
	*num2 = *num1;				//num2 = 10
	*num1 = num3;				//num1 = 20

	
}


int Swap2(int num1, int num2) {


	return num1;
}



int main321() {
	int num1 = 10;
	int num2 = 20;
	int num3 = Swap2(num1, num2);
	int num4 = Swap2(num2, num1);
	num1 = num4;
	num2 = num3;



	//������ �ּ� == &����
	//Swap(&num1, &num2);

	printf("num1 : %d\n", num1);
	printf("num2 : %d\n", num2);



	return 0;
}