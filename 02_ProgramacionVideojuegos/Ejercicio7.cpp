#include "Ejercicio4.h"
#include <cstdio>

char* concatStr(const char* a, const char* b) {
	size_t sizeA = strlength(a);
	size_t sizeB = strlength(b);
	char* strFinal = new char[sizeA + sizeB+1];
	size_t strIndex = 0;
	for (size_t i = 0; i < sizeA; i++)
	{
		strFinal[strIndex] = a[i];
		strIndex++;
	}
	for (size_t i = 0; i < sizeB; i++)
	{
		strFinal[strIndex] = b[i];
		strIndex++;
	}
	strFinal[sizeA + sizeB] = '\0';

	return strFinal;
}

void Ejercicio7() {
	printf("--------Ejercicio 7--------\n");
	char a[] = "hola";
	char b[] = "Adios";
	char *c = concatStr(a, b);
	printf("%s\n", c);
}
