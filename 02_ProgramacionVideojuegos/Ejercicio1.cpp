#include <cstdio>

void ChangePointers(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void Ejercicio1() {
	printf("--------Ejercicio 1--------\n");
	int a = 3;
	int b = 7;
	ChangePointers(&a, &b);
	printf("A value: %d\nB Value: %d\n", a, b);
}