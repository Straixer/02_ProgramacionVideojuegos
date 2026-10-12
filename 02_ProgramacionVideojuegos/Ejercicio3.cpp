#include "Ejercicio3.h"

bool compareIntPtrSameAddress(int* a, int* b) {
	return a == b;
}
bool compareIntPtrSameValue(int* a, int* b) {
	return *a == *b;
}
void swapIntPtrAddresses(int*& a, int*& b) {
	int* temp = b;
	b = a;
	a = temp;
}
void swapIntPtrValues(int* a, int* b) {
	int temp = *b;
	*b = *a;
	*a = temp;
}
void Ejercicio3() {

}