#include <cstdio>

size_t strlength(const char* str) {
	size_t size = 0;
	while (str[size] != '\0') {
		size++;
	}
	return size;
}

void strReverse(char* str) {
	size_t size = strlength(str);
	if (size <= 1) {
		return;
	}
	size_t left = 0;
	size_t right = size - 1;

	while (left < right)
	{
		char temp = str[right];
		str[right] = str[left];
		str[left] = temp;
		left++;
		right--;
	}
}

int strCompare(const char* str1, const char* str2) {
	while (*str1 != '\0' && *str1 == *str2) {
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

void Ejercicio4() {
	printf("--------Ejercicio 4--------\n");
	char str1[] = "Apple";
	char str2[] = "Apple";
	char str3[] = "Manzana";
	printf("La cadena %s es %s que %s\n", str1, (strCompare(str1, str2) == 0) ? "igual" : "diferente", str2);
	strReverse(str2);
	printf("La cadena %s es %s que %s\n", str1, (strCompare(str1, str2) == 0) ? "igual" : "diferente", str2);
	printf("La cadena %s es %s que %s\n", str2, (strCompare(str2, str3) == 0) ? "igual" : "diferente", str3);
}