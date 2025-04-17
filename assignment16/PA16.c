/*
 * ���ϸ�: PA16.c

 * ����: ��ǻ�� �ý��ۿ��� ������ ǥ���ϴ� ��� �߿� RGB ǥ����� red, greem, blue�� 8��Ʈ���� ����ؼ�
		 ������ ǥ���ϹǷ� 24��Ʈ Ʈ���÷���� �Ѵ�. ��ǻ�� �ý��ۿ����� 32��Ʈ �������� ������ ����Ʈ����
		 red, green, blue ������ ������ �����ϰ� �ֻ��� ����Ʈ�� ������� �ʰ� 0���� ä���.
		 0~255 ������ ���� red, green, blue�� ������ 3�� �Է¹޾Ƽ� RGB ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
		 RGB ������ ����� ���� ����Ʈ ������ ���� �˾ƺ��� ������ 16������ ����Ѵ�.

 * �ۼ���: ������

 * ��¥: 2025.04.17.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

unsigned int rgbtruecolor(unsigned int r, unsigned int g, unsigned int b);
int assign_16(void);
// �Լ��� ������Ÿ��

int main(void)
{
	int RGB = assign_16();

	return RGB;
}

/*
 * �Լ���: assign_16()
 * ���: red, green, blue�� �Է¹���, RGB Ʈ���÷��� ����ϵ��� �Լ�ȣ��, �� ����� �ֿܼ� ���
 * �Է�: ����
 * ��ȯ: �����̸� 0�̸� ����, �׿� ���� �����̴�.
 */

int assign_16(void)
{
	unsigned int red, green, blue;

	// red, green, blue �Է� �ޱ�
	printf("red? ");
	scanf_s("%d", &red);
	printf("green? ");
	scanf_s("%d", &green);
	printf("blue? ");
	scanf_s("%d", &blue);
	if (red > 255) red = 0x0000;
	if (green > 255) green = 0x0000;
	if (blue > 255) blue = 0x0000;

	unsigned int rgb = rgbtruecolor(red, green, blue); // RGB ���� ����

	// RGB ���� ���
	printf("RGB ����: %06X\n", rgb);

	return 0;
}

/*
 * �Լ���: rgbtruecolor()
 * ���: red, green, blue�� �Է¹���, RGB Ʈ���÷��� ����� ���
 * �Է�: red, green, blue�� �Է�
 * ��ȯ: RGB Ʈ���÷�
 */

unsigned int rgbtruecolor(unsigned int r, unsigned int g, unsigned int b)
{
	unsigned int rgbtrue = 0.0; // RGB ����
	rgbtrue = r | g << 8 | b << 16;

	return rgbtrue;
}
