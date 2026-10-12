#include <cstdio>

void matrixAddition4x4(const int a[4][4], const int b[4][4], int total[4][4]) {
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			total[i][j] = a[i][j] + b[i][j];
		}
	}
}

void printMatrix(const int a[4][4]) {
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}

void Ejercicio5() {
	printf("--------Ejercicio 5--------\n");
	int a[4][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16}
	};
	int b[4][4] = {
		{2, 32, 14, 1},
		{3, 5, 1, 10},
		{10, 1, 6, 2},
		{1, 2, 5, 1}
	};

	int total[4][4]{};

	matrixAddition4x4(a, b, total);
	printMatrix(total);
}
