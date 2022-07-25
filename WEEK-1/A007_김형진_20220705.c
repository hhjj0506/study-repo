#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int scale[8] = {1, 2, 3, 4, 5, 6, 7, 8},
	input[7], i, j, count = 0;

	for (i = 0; i < 7; i++) {
		scanf("%d", &input[i]);
		if (input[i] == scale[i]) count++;
	}

	if (count == 7) {
		printf("ascending");
	}
	else {
		int des = 7, count = 0;
		for (j = 0; j < 7; j++) {
			if (input[j] == scale[des]) count++;
			des--;
		}
		if (count == 7) {
			printf("descending");
		}
		else printf("mixed");
	}
	
}