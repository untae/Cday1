#include <stdio.h>




//����ü : ������ ����ü (�ϳ��� ������ ������ ���õ� �������� ��Ƴ�
// ĳ���� ���� ����ü
struct character {
	char* name;
	int health;
	int damage;

};


typedef struct monster {
	char* name;
	int health;
	int damage;
	char item[64];
} mon;



int main35() {
	// ���� ĳ����

	int health1, health2;
	char* name1, name2;
	int damage1, damage2;

	int health[500];				//ü�� �迭
	char* name[500];			//�̸� �迭	
	int damage[500];				//�ɷ� �迭

	struct character aaaa;
	struct character naaa;

	aaaa.name = "aaaa";
	aaaa.health = 1500;
	aaaa.damage = 150;

	aaaa.name = "naaa";
	aaaa.health = 4500;
	aaaa.damage = 550;


	mon ���������� = { "������ ����", 45643, 789, "��" };
	mon ȭ���巡�� = { "ȭ���巡��", 12222, 1111, NULL };





	printf("ĳ���� : %s, ü�� : %d, ���� : %d\n",aaaa.name, aaaa.health, aaaa.damage);
	printf("ĳ���� : %s, ü�� : %d, ���� : %d, ������ : %s\n", ����������.name, ����������.health, ����������.damage, ����������.item);

	return 0;
}





	/*health[0] = 1500;
	name[0] = "aaaa";
	damage[0] = 150;

	health[1] = 1600;
	name[1] = "naaa";
	damage[1] = 950;

	health[2] = 2600;
	name[2] = "caaa";
	damage[2] = 450;*/


#define char_count 3
	//ĳ�� ��� ���

	//for (int i = 0; i < char_count; i++)
	/*{
		printf("ĳ���� : %s, ü�� : %d, ���� : %d\n", name[i], health[i], damage[i]);
	}*/
