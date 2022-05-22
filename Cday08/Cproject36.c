#include <stdio.h>


typedef struct person
{
	char* name;
	int age;
	float height;
	float weight;

} per;




int main36() {


	per ±èÃ¶¼ö = { "±èÃ¶¼ö", 20, 170.5, 65.6 };
	per ±è±¤Çö = { "±è±¤Çö", 32, 190.5, 79.6 };
	per ·ùÇöÁø = { "·ùÇöÁø", 34, 193.5, 100.6 };


	printf("ÀÌ¸§ : %s, ³ªÀÌ : %d, Å° : %.1f, ¸ö¹«°Ô : %.1f\n", ±èÃ¶¼ö.name, ±èÃ¶¼ö.age, ±èÃ¶¼ö.height, ±èÃ¶¼ö.weight);
	printf("ÀÌ¸§ : %s, ³ªÀÌ : %d, Å° : %.1f, ¸ö¹«°Ô : %.1f\n", ±è±¤Çö.name, ±è±¤Çö.age, ±è±¤Çö.height, ±è±¤Çö.weight);
	printf("ÀÌ¸§ : %s, ³ªÀÌ : %d, Å° : %.1f, ¸ö¹«°Ô : %.1f\n", ·ùÇöÁø.name, ·ùÇöÁø.age, ·ùÇöÁø.height, ·ùÇöÁø.weight);

	return 0;
}