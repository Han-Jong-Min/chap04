/*
 * ���ϸ�: PA02.c

 * ����: ȭ�� �µ��� �Ǽ��� �Է¹޾� ���� �µ��� ��ȯ�ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
		 ȭ�� �µ��� ���� �µ��� ��ȯ�ϴ� ������ ������ ����.
		 �����µ� = (ȭ���µ� - 32) * 5 / 9

 * �ۼ���: ������

 * ��¥: 2025.04.17.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double Ctemperature(double ftemp);
int assign_02(void);
// �Լ��� ������Ÿ��

int main(void)
{
	int r = assign_02();

	return r;
}

/*
 * �Լ���: assign_02()
 * ���: ȭ�� �µ��� �Է¹���, ���� �µ��� ����ϵ��� �Լ�ȣ��, �� ����� �ֿܼ� ���
 * �Է�: ����
 * ��ȯ: �����̸� 0�̸� ����, �׿� ���� �����̴�.
 */

int assign_02(void)
{
	// 1. ȭ�� �µ��� �Է� �޾� ����
	double f = 0.0; // ȭ�� �µ�
	printf("ȭ�� �µ��� �Է����ּ���: ");
	scanf("%lf", &f);

	// 2. ȭ�� �µ��� ������ ��ȯ
	double result = Ctemperature(f);

	// 3. ���� ���� �µ��� ���
	printf("ȭ�� �µ�: %.2f F ���� �µ�: %.2f C\n", f, result);

	return 0;
}

/*
 * �Լ���: Ctemperature()
 * ���: ȭ�� �µ��� �Է¹���, ���� �µ��� ��ȯ�Ͽ� ��ȯ
 * �Է�: ȭ�� �µ�
 * ��ȯ: ���� �µ�
 */

double Ctemperature(double ftemp)
{
	double Ctemp = 0.0;

	// �����µ� = (ȭ���µ� - 32) * 5.0 / 9.0
	Ctemp = (ftemp - 32) * 5.0 / 9.0;

	return Ctemp;
}
