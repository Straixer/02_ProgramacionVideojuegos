#include <cstdio>

int AddhigherThanFive(int arr[10]) {
	int add = 0;
	for (int i = 0; i < 10; ++i) {
		if (arr[i] > 5) {
			add += arr[i];
		}
	}
	return add;
}

void Ejercicio2() {
	int arr[] = { 5,5,4,2,4,6,2,2,10,12 };
	printf("--------Ejercicio 2--------\n");
	printf("Resultado de la suma: %d\n", AddhigherThanFive(arr));
}