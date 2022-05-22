#include <stdio.h>




//구조체 : 변수의 집합체 (하나의 주제를 가지고 관련된 변수들을 담아놈
// 캐릭터 정보 구조체
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
	// 게임 캐릭터

	int health1, health2;
	char* name1, name2;
	int damage1, damage2;

	int health[500];				//체력 배열
	char* name[500];			//이름 배열	
	int damage[500];				//능력 배열

	struct character aaaa;
	struct character naaa;

	aaaa.name = "aaaa";
	aaaa.health = 1500;
	aaaa.damage = 150;

	aaaa.name = "naaa";
	aaaa.health = 4500;
	aaaa.damage = 550;


	mon 협곡의전령 = { "협곡의 전령", 45643, 789, "검" };
	mon 화염드래곤 = { "화염드래곤", 12222, 1111, NULL };





	printf("캐릭명 : %s, 체력 : %d, 공격 : %d\n",aaaa.name, aaaa.health, aaaa.damage);
	printf("캐릭명 : %s, 체력 : %d, 공격 : %d, 아이템 : %s\n", 협곡의전령.name, 협곡의전령.health, 협곡의전령.damage, 협곡의전령.item);

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
	//캐릭 목록 출력

	//for (int i = 0; i < char_count; i++)
	/*{
		printf("캐릭명 : %s, 체력 : %d, 공격 : %d\n", name[i], health[i], damage[i]);
	}*/
