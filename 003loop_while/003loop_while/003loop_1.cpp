#include <iostream>

int main(void)
{
	//1. ������ 4��, 8���� ���
	printf("\n[����1]\n");

	int section = 4;		//���� �ɰ��� ������ section�� ����
	while (section <= 8)		//section�� 8 ������ ������ �ݺ�
	{
		int multi = 1;		//�� ���� ���� ���� multi������ ����

		printf("=====%d��=====\n", section);			//=====(section)��=====����ϰ� �ٹٲ�
		while (multi <= 9)		//���� ���� 9 ������ ������ �ݺ�
		{
			printf("%d * %d = %d\n", section, multi, section * multi);		//section * multi = (section * multi)\n ���
			multi++;		//multi������ 1�� ����
		}

		section += 4;		//�� �� ������ �ܼ��� 4 ���ϱ�
	}

	fgetc(stdin);
}