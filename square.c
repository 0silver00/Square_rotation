#include <stdio.h>
#include <stdlib.h>

int main() {
	int size;
	int* square;
	printf("표의 사이즈를 입력해주세요 ex)5*5일경우 5입력\n");
	scanf_s("%d", &size, sizeof(int));
	
	if (size < 5 || size>10) {
		printf("plz input 5~10\n");
		return;
	}

	int square_size = size * size;
	printf("표의 값을 입력해주세요\n");
	square = (int*)malloc(sizeof(int) * square_size);
	for (int i = 0; i < square_size; i++) {
		scanf_s("%d", &square[i], sizeof(square[i]));
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("%d ", square[((square_size - size) + i) - (size * j)]);
		}
		printf("\n");
	}

	free(square);
	return 0;
}