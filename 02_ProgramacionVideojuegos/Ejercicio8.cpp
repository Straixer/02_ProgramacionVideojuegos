#include <cstdio>

bool isPermutation(const int* a, size_t sizeA, const int* b, size_t sizeB) {
	if (sizeA != sizeB) return false;
	bool isPresent[256] = { false };
	for (size_t i = 0; i < sizeA; i++)
	{
		isPresent[a[i]] = true;
	}
	for (size_t i = 0; i < sizeB; i++)
	{
		if (!isPresent[b[i]])
		{
			return false;
		}
		isPresent[b[i]] = false;
	}
	return true;

}

void Ejercicio8() {
	printf("--------Ejercicio 8--------\n");
	int orig[] = { 4, 10, 255, 0, 78 };
	int perm[] = { 0, 78, 4, 255, 10 };
	size_t tamorig = sizeof(orig) / sizeof(orig[0]);
	size_t tamPerm = sizeof(perm) / sizeof(perm[0]);

	bool res1 = isPermutation(orig, tamorig, perm, tamPerm);
	printf("El array 2 %s una permutacion del array 1.\n", res1 ? "es" : "no es");

	int orig2[] = { 4, 10, 255, 0, 78 };
	int perm2[] = { 0, 78, 4, 3, 10 };
	size_t tamorig2 = sizeof(orig2) / sizeof(orig2[0]);
	size_t tamPerm2 = sizeof(perm2) / sizeof(perm2[0]);

	bool res2 = isPermutation(orig2, tamorig2, perm2, tamPerm2);
	printf("El array 2 %s una permutacion del array 1.\n", res2 ? "es" : "no es");
}

