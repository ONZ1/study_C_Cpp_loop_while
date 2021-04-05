#include <iostream>

int main(void)
{
	//1. 구구단 4단, 8단을 출력
	printf("\n[문제1]\n");

	int section = 4;
	while (section <= 8)
	{
		int multi = 1;

		printf("=====%d단=====\n", section);
		while (multi <= 9)
		{
			printf("%d * %d = %d\n", section, multi, section * multi);
			multi++;
		}

		section += 4;
	}

	fgetc(stdin);
}