/*
 * ���ϸ�: PA15.c

 * ����: �츮�� �˰� �ִ� ȯ���� �Ÿű������̴�. ���� �޷��� ������ ���� �Ÿű������� ������ ȯ�� �����Ḧ ���ؼ�
		 ȯ���� �����ȴ�. ȯ��������� ȯ��������� ���� �޶�����. ȯ������������ ���ึ�� �̸� ��������, ȯ���������
		 ������ �ٸ��� å���ȴ�. ȯ������������ 1.75%�� ������ �ִٰ� �����ϰ� ��-�޷� �Ÿű������� ȯ�������(%)��
		 �Է¹޾� �޷��� �� �� ����Ǵ� ȯ���� �����ϰ�, �����ϰ��� �ϴ� �޷��� ������ �Է¹޾Ƽ� �� ���� �ش��ϴ���
		 ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ������

 * ��¥: 2025.04.17.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double applied_r(double std_rate, double pre_rate);
double assign_15(void);
// �Լ��� ������Ÿ��

int main(void)
{
	int money = assign_15();

	return money;
}

/*
 * �Լ���: assign_15()
 * ���: ��/�޷� �Ÿű�����, ȯ�������, ������ �޷��� �Է¹���, ���� ȯ���� ����ϵ��� �Լ�ȣ��, �� ����� �ֿܼ� ���
		 ���� ȯ���� �޷��� ��ȭ�� ��ȯ
 * �Է�: ����
 * ��ȯ: �����̸� 0�̸� ����, �׿� ���� �����̴�.
 */

double assign_15(void)
{
	int standard_rate = 0;    // ��/�޷� �Ÿű�����
	int preferential_rate = 0;       // ȯ�������
	double buy_usd = 0;     // ������ �޷�(USD)
	

	// ����� �Է� �ޱ�
	printf("��/�޷� �Ÿű����� ? ");
	scanf("%d", &standard_rate);

	printf("ȯ�������(0~100%%) ? ");
	scanf("%d", &preferential_rate);

	double applied_rate = applied_r(standard_rate, preferential_rate); // ���� ȯ��

	printf("�޷� �� �� ȯ���� %f�Դϴ�.\n", applied_rate);

	printf("������ �޷�(USD) ? ");
	scanf("%lf", &buy_usd);

	printf("USD %.2f �� �� ==> KRW %.2f\n", buy_usd, applied_rate * buy_usd);

	return 0;
}

/*
 * �Լ���: applied_r()
 * ���: �Ÿű������� ȯ��������� �Է¹���, ���� ȯ���� ����Ͽ� ��ȯ
 * �Է�: �Ÿű������� ȯ�������
 * ��ȯ: ���� ȯ��
 */

double applied_r(double std_rate, double pre_rate)
{
	double applied_rate = 0.0; // ���� ȯ��
	applied_rate = std_rate + (std_rate * 0.0175 * (1 - pre_rate / 100));

	return applied_rate;
}
