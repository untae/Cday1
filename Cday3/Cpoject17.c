#include <stdio.h>


void main11() {

	//int age;
	//
	//printf("���̸� �Է��ϼ���");
	//scanf_s("%d", &age);

	//if (age >= 20) {
	//	printf("���̴� %d���̰�, �����Դϴ�", age);
	//}else if(age >= 14){
	//	printf("���̴� %d���̰�, û�ҳ��Դϴ�", age);
	//}else {
	//	printf("���̴� %d���̰�, ����Դϴ�", age);
	//}

	

	int year = 0;
	printf("������ �Է��ϼ���");
	scanf_s("%d", &year);

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		printf("%d���� �����Դϴ�", year);

	}
	else
	{
		printf("%d���� ������ �ƴմϴ�", year);
	}




}