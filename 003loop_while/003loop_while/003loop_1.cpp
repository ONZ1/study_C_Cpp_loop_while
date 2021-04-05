#include <iostream>

int main(void)
{
	//1. 구구단 4단, 8단을 출력
	printf("\n[문제1]\n");

	int section = 4;		//단이 될값을 변수명 section에 저장
	while (section <= 8)		//section이 8 이하일 때까지 반복
	{
		int multi = 1;		//단 값에 곱할 값을 multi변수명에 저장

		printf("=====%d단=====\n", section);			//=====(section)단=====출력하고 줄바꿈
		while (multi <= 9)		//곱할 값이 9 이하일 때까지 반복
		{
			printf("%d * %d = %d\n", section, multi, section * multi);		//section * multi = (section * multi)\n 출력
			multi++;		//multi변수값 1씩 증가
		}

		section += 4;		//한 단 끝나면 단수에 4 더하기
	}

	fgetc(stdin);
}