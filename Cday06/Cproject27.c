#include <stdio.h>

int main111() {

	//char arr[20] = "ȫ�浿";
	//int num1[20] = { 1,2,3, };
	//int num2[3][2] = { {1,2},{3,4},{5,6} }; //�迭�ȿ� �迭 ����

	////num2[0][0], num2[0][1]
	////num2[1][0], num2[1][1]
	////num2[2][0], num2[2][1]

	//num2[2][0] = 7;

	//printf("%d\n", num2[2][0]);

	//char names[5][16] = { "aaa","bbb","ccc","ddd" };

	//printf("%s\n", names[0]);

	//for (int i = 0; i < 3; i++)
	//{
	//	printf("%d\n", num1[i]);


	//}


	char menu[4][50] = {"�Ƹ޸�ī��","��","��ī","�ֽ�"};
	int pri[4] = { 1500,2500,2500,3000 };


	for (char i = 0; i < 4; i++)
	{
		printf("%s : %d\n", menu[i], pri[i]);
	}
}