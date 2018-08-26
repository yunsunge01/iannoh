#include <stdio.h>


#pragma warning(disable:4996)

int main(int argc, char* argv[]) {
	if (argc < 3) {
		printf("%d\n", argc);
		return 0;
	}

	FILE* fp = fopen(argv[1], "rb");
	if (fp == NULL)
		puts("open failed");
	FILE* fp2 = fopen(argv[2], "wb");

	while (!feof(fp))
		fputc(fgetc(fp), fp2);
	fclose(fp);
	return 0;
}