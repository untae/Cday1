#include <stdio.h>

// SUM �̶�� �̸��� �Լ�
void Sum(int var1, int var2, int var3) {
	printf("%d\n", var1+var2+var3);
}

void Sub(int var1, int var2) {
	if (var1 < 0) {
		var1 = var1 * -1;
	}
	if (var2 < 0) {
		var2 = var2 * -1;
	}
	printf("%d\n", var1 - var2);
}

void Div(int var1, int var2) {

	
	float div = var1 / (float)var2;
	if (var2 == 0) {
		div = 0;
	}
	printf("%.2f\n", div);
}




	// �Լ� : �ڵ带 �����ϴ� ��� ( C���� �־����� �������δ� �� �� ���� ����� �����ڰ� ���� ���巷�� ����Ѵ�)
	// ��� ������ ����, �Ұ�ȣ�� �پ�����
void main111() {

	Sum(50, 20, 34);
	Sum(30, 20, 99);
	Sum(40, 20, 326);


	Sub(7456, 465);
	Sub(-10, -5);
	Sub(10, -5);

	Div(50, 25);
	Div(50, 0);
	Div(50, 23);


}