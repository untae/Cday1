#include <stdio.h>


typedef struct person
{
	char* name;
	int age;
	float height;
	float weight;

} per;




int main36() {


	per ��ö�� = { "��ö��", 20, 170.5, 65.6 };
	per �豤�� = { "�豤��", 32, 190.5, 79.6 };
	per ������ = { "������", 34, 193.5, 100.6 };


	printf("�̸� : %s, ���� : %d, Ű : %.1f, ������ : %.1f\n", ��ö��.name, ��ö��.age, ��ö��.height, ��ö��.weight);
	printf("�̸� : %s, ���� : %d, Ű : %.1f, ������ : %.1f\n", �豤��.name, �豤��.age, �豤��.height, �豤��.weight);
	printf("�̸� : %s, ���� : %d, Ű : %.1f, ������ : %.1f\n", ������.name, ������.age, ������.height, ������.weight);

	return 0;
}