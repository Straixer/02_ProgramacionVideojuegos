#include <cstdio>

void ChangePointers(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void Ejercicio1() {
	int a = 3;
	int b = 7;
	ChangePointers(&a, &b);
	printf("A value: %d\nB Value: %d\n", a, b);
}