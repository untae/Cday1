#include <stdio.h>

void main() {


	int i = 0;
	int pass = 0;
	int pass1 = 8907;


	for (i = 0; i < 3; i++) {
	printf("��й�ȣ�� �Է��ϼ���");
	scanf_s(" %d", &pass);
		if (i >= 3) {
			printf("�Է�Ƚ���� �ʰ��Ͽ����ϴ�.");
			break;
	}
			if (pass == pass1) {
				printf("�α��� �Ǿ����ϴ�.");
				break;
		}
			else {
				printf("��й�ȣ�� Ʋ�Ƚ��ϴ�.\n");
				printf("��й�ȣ�� �ٽ� �Է��ϼ���\n");
				continue;
		}

	}

}