#include <stdio.h>

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

	/*
	while���� �̿��� ���
	2-1

	*
	***
	*****
	*******
	
	*/
	printf("\n[����2-1]\n");

	int starloop1 = 0;

	while (starloop1 < 7)
	{
		int b = 0;
		while (b <= starloop1)
		{
			printf("*");
			b++;
		}
		printf("\n");
		starloop1 += 2;
	}

	/*
	2-2

	*
	*
	**
	**
	***
	***
	****
	****
	*****
	*****
	
	*/
	printf("\n[����2-2]\n");
	
	int starloop2 = 0;

	while (starloop2 < 10)
	{
		
		int b = 0;
		while (b <= starloop2)
		{
			printf("*");
			b += 2;
		}
		starloop2++;
		printf("\n");
	}

	/*
	2-3

	*****
	****
	***
	**
	*
	*
	**
	***
	****
	*****
	
	*/
	printf("\n[����2-3]\n");

	int starloop3 = 5;

	while (starloop3 > 0)
	{
		int b = 0;
		while (b < starloop3)
		{
			printf("*");
			b++;
		}
		printf("\n");
		starloop3 --;
	}

	while (starloop3 < 5)
	{
		int b = 0;
		while (b <= starloop3)
		{
			printf("*");
			b++;
		}
		printf("\n");
		starloop3++;
	}

	fgetc(stdin);
	return 0;
}