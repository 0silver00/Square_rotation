#include <stdio.h>
#include <stdlib.h>

int main() {
	int size;
	int* square;
	printf("ǥ�� ����� �Է����ּ��� ex)5*5�ϰ�� 5�Է�\n");
	scanf_s("%d", &size, sizeof(int));
	
	if (size < 5 || size>10) {
		printf("plz input 5~10\n");
		return;
	}

	int square_size = size * size;
	printf("ǥ�� ���� �Է����ּ���\n");
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