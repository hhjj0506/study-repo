#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num, i, tot = 0;

	for (i = 0; i < 5; i++) {
		scanf("%d", &num);
		tot += num * num;
	}

	printf("%d", tot % 10);

	return 0;
}