#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
	Source by AlphaCodingSkills (https://www.alphacodingskills.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	int* p1 = (int*)calloc(5, sizeof(int));
	int* p2 = (int*)malloc(sizeof(int[5]));
	int* p3 = (int*)realloc(p2, 10 * sizeof * p3);

	//membatalkan alokasi memori yang dialokasikan sebelumnya
	free(p1);
	free(p3);

	_getch();
	return 0;
}