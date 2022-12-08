#include <stdio.h>

int main(void) {
	int natural = 0;
	int i = 0;

	printf("정수 N을 입력하세요 : ");
	scanf("%d", &natural);

	for (i = 0; i <= 100; i++) {
		if (i % natural == 0) { //if(!(i%n))
			printf("출력 : %d \n", i, natural);
		}

	}
	return 0;
}