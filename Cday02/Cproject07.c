#include <stdio.h>

void main9() {
	// kor 84 mat 78 eng 88


	int kor, mat, eng;


	kor = 84;
	mat = 78;
	eng = 88;


	int sum = kor + mat + eng;
	float div = (float)sum / 3;
	// ==> float div = sum / 3.0f;  //



	printf("총점은 %d 점이고, 평균은 %.2f 이다", sum, div);



}