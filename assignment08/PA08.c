/*
 * ���ϸ�: PA08.c

 * ����: �������� ���̸� �Է¹޾� ���� ���Ǹ� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
		 �̋� ���̴� 3.141592��� ����.

 * �ۼ���: ������

 * ��¥: 2025.04.17.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double volume(double r);
int assign_08(void);
// �Լ��� ������Ÿ��

int main(void)
{
	int V = assign_08();

	return V;
}

/*
 * �Լ���: assign_08()
 * ���: ������ ���̸� �Է¹���, ���Ǹ� ����ϵ��� �Լ�ȣ��, �� ����� �ֿܼ� ���
 * �Է�: ����
 * ��ȯ: �����̸� 0�̸� ����, �׿� ���� �����̴�.
 */

int assign_08(void)
{
	// 1. ������ ���̸� �Է� �޾� ����
	double radius = 0.0; // ������ ����
	printf("�������� ���̸� �Է����ּ���: ");
	scanf("%lf", &radius);

	// 2. ���� ���Ǹ� ���
	double result = volume(radius);

	// 3. ���� ���� ���Ǹ� ���
	printf("�������� ����? %.2f \n���� ����: %f\n", radius, result);

	return 0;
}

/*
 * �Լ���: volume()
 * ���: �������� �Է¹���, ���� ���Ǹ� ����Ͽ� ��ȯ
 * �Է�: ������ ����
 * ��ȯ: ���� ����
 */

double volume(double r)
{
	double vol = 0.0;
	double pi = 3.141592; // ����
	// ���� ���� = (4/3) * pi * ������^3
	vol = (4.0 / 3.0) * pi * pow(r, 3);

	return vol;
}
