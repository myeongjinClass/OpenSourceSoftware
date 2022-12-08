#include <stdio.h>
int main(void) {
	int insu = 0;
	int i = 0;

	printf("정수 N을 입력하세요 :");
	scanf_s("%d", &insu);

	for (i = 1; i <= 100; i++) {
		if (i % insu == 0) { //if(!(i%n))
			printf("%d ", i, insu);
		}

	}
	return 0;
}