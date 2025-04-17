/*
 * ���ϸ�: PA01.c

 * ����: ������ �ӷ��� �Ǽ��� �Է¹޾� � �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ������ kg ����
		 �ӷ��� m/s ������ �Է¹޴´�.

 * �ۼ���: ������

 * ��¥: 2025.04.09.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double getMotionEnergy(double weight, double velocity);
int assign_01(void);
// �Լ��� ������Ÿ��

int main(void)
{
	int r = assign_01();

	return r;
}

/*
 * �Լ���: assign_01()
 * ���: ����, �ӷ��� �Է¹���, ��������� ����ϵ��� �Լ�ȣ��, �� ����� �ֿܼ� ���
 * �Է�: ����
 * ��ȯ: �����̸� 0�̸� ����, �׿� ���� �����̴�.
 */

int assign_01(void)
{
	// 1. ���� �ӵ��� �Է� �޾� ����
	double w = 0.0; // ���� kg
	double v = 0.0; // �ӷ� m/s
	printf("����, �ӵ��� �Է����ּ���: ");
	scanf("%lf %lf", &w, &v);

	// 2. ��������� ���
	double result = getMotionEnergy(w, v);

	// 3. ���� ��������� ���
	printf("���� = %.2f kg �ӷ� = %.2f m/s �������: %.2f J�Դϴ�.\n", w, v, result);

	return 0;
}

/*
 * �Լ���: getMotionEnergy()
 * ���: ����, �ӷ��� �Է¹���, ��������� ����Ͽ� ��ȯ
 * �Է�: ����(kg), �ӷ�(m/s)
 * ��ȯ: �������
 */

double getMotionEnergy(double weight, double velocity)
{
	double energy = 0.0;

	// ������� = 1/2 * ���� * �ӷ� * �ӷ�
	energy = 0.5 * weight * velocity * velocity;

	return energy;
}
