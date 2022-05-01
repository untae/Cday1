#include <stdio.h>

void main() {


	int i = 0;
	int pass = 0;
	int pass1 = 8907;


	for (i = 0; i < 3; i++) {
	printf("비밀번호를 입력하세요");
	scanf_s(" %d", &pass);
		if (i >= 3) {
			printf("입력횟수를 초과하였습니다.");
			break;
	}
			if (pass == pass1) {
				printf("로그인 되었습니다.");
				break;
		}
			else {
				printf("비밀번호가 틀렸습니다.\n");
				printf("비밀번호를 다시 입력하세요\n");
				continue;
		}

	}

}