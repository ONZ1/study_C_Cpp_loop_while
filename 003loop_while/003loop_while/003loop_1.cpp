#include <iostream>

int main(void)
{
	//1. ������ 4��, 8���� ���
	printf("\n[����1]\n");

	int section = 4;
	while (section <= 8)
	{
		int multi = 1;

		printf("=====%d��=====\n", section);
		while (multi <= 9)
		{
			printf("%d * %d = %d\n", section, multi, section * multi);
			multi++;
		}

		section += 4;
	}

	fgetc(stdin);
}