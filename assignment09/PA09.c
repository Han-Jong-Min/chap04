/*
 * ���ϸ�: PA09.c

 * ����: �������� ����ð��� �� ������ �Է¹޾� �� �ð� �� �� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.04.17.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int playtimeH(int s);
int playtimeM(int s);
int playtimeS(int s);
int assign_09(void);
// �Լ��� ������Ÿ��

int main(void)
{
	int time = assign_09();

	return time;
}

/*
 * �Լ���: assign_09()
 * ���: ����ð�(��)�� �Է¹���, �ð�, ��, �ʸ� ����ϵ��� �Լ�ȣ��, �� ����� �ֿܼ� ���
 * �Է�: ����
 * ��ȯ: �����̸� 0�̸� ����, �׿� ���� �����̴�.
 */

int assign_09(void)
{
	// 1. �� ������ �Է� �޾� ����
	
	int sec = 0; // �� ����
	printf("��� �ð�(��)�� �Է����ּ���: ");
	scanf("%d", &sec);

	// 2. �ð�, ��, �ʷ� ��ȯ
	int result_H = playtimeH(sec);
	int result_M = playtimeM(sec);
	int result_S = playtimeS(sec);

	// 3. ���� �ð�, ��, �ʸ� ���
	if (result_H == 0 && result_M == 0 && result_S == 0) {
		printf("����ð��� 0���Դϴ�.\n");
	}
	else {
		printf("����ð��� ");
		(result_H != 0) ? printf("%d�ð� ", result_H) : 0;
		(result_M != 0) ? printf("%d�� ", result_M) : 0;
		(result_S != 0) ? printf("%d��", result_S) : 0;
		printf("�Դϴ�.\n");
	}

	return 0;
}

/*
 * �Լ���: playtimeH(), playtimeM(), playtimeS()
 * ���: ����ð�(��)�� �Է¹���, �ð�/��/�ʸ� ����Ͽ� ��ȯ
 * �Է�: ����ð�(��)
 * ��ȯ: �ð�, ��, ��
 */

int playtimeH(int s)
{
	int hour = 0; // �ð�
	// �ð� = �� / 60 / 60
	hour = (s / 60) / 60;

	return hour;
}

int playtimeM(int s)
{
	int min = 0; // ��
	// �� = (�� / 60) % 60
	min = (s / 60) % 60;

	return min;
}

int playtimeS(int s)
{
	int sec = 0; // ��
	// �� = �� % 60
	sec = s % 60;

	return sec;
}

