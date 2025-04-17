/*
 * ���ϸ�: PA17.c

 * ����: 32��Ʈ ũ���� ������(��ȣ ���� ������)���� 0~31�� ��Ʈ�� �����Ѵ�. 
		 7��° ��Ʈ�� 1�� ��, 15��° ��Ʈ�� 1�� ��, 23��° ��Ʈ�� 1�� ��, 31��° ��Ʈ�� 
		 1�� ���� ���ؼ� 16������ 10������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.04.17.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assign_17(void);
// �Լ��� ������Ÿ��

int main(void)
{
	int a = assign_17();

	return a;
}

/*
 * �Լ���: assign_17()
 * ���: 7, 15, 23, 31 ��Ʈ�� 1�� ���� ���, 16������ 10������ ���
 * �Է�: ����
 * ��ȯ: �����̸� 0�̸� ����, �׿� ���� �����̴�.
 */

int assign_17(void)
{
	// 1. 7, 15, 23, 31 ��Ʈ�� 1�� �� ���
	int seven = 0x80;
	int fifteen = 0x8000;
	int twentythree = 0x800000;
	int thirtyone = 0x80000000;

	// 2. 16������ 10������ ���
	printf("7��° ��Ʈ�� 1�� �� : %08x %d\n", seven, seven);
	printf("15��° ��Ʈ�� 1�� �� : %08x %d\n", fifteen, fifteen);
	printf("23��° ��Ʈ�� 1�� �� : %08x %d\n", twentythree, twentythree);
	printf("31��° ��Ʈ�� 1�� �� : %08x %d\n", thirtyone, thirtyone);

	return 0;
}
