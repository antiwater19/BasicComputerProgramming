/* ù��° ���α׷���*/
#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>

/* ù��° ���α׷���*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int ex1226(void) {
	printf("ù��° ���α׷����Դϴ�.\n");
	return 0;
}

int ex1227_1() {

	int x = 100, y = 200, sum;
	sum = x + y;
	printf("�� ���� ��: %d\n\n\n", sum);

	return 0;
}

int ex1227_2() {
	int num1 = 100, num2 = 200;
	float hop;
	hop = num1 + num2;
	printf("�� ���� ��(������ ����): %f\n\n\n", hop);

	return 0;
}

int ex1227_3() {
	int x, y, sum, diff, mul, div;
	//x = 20;
	//y = 10;
	printf("ù��° ���� �־��ּ���");
	scanf("%d", &x);
	printf("�ι�° ���� �־��ּ���");
	scanf("%d", &y);
	//sum = x + y;
	//diff = x - y;
	//mul = x * y;
	//div = x / y;
	printf("�μ��� ��: %d\n", x + y);
	printf("�μ��� ��: %d\n", x - y);
	printf("�μ��� ��: %d\n", x * y);
	printf("�μ��� ��: %d\n", x / y);

	return 0;
}

int ex1227_4() { // 202003051 �̹μ� �ǽ�
	double w = 0, h = 0, area, perimeter;
	// w�� �ʺ� h�� ����

	printf("�ʺ� �Է��Ͻÿ�: ");
	scanf("%lf", &w); // �ʺ� �Է�
	printf("���̸� �Է��Ͻÿ�: ");
	scanf("%lf", &h); // ���� �Է�
	area = w * h; // �簢�� ����
	perimeter = 2 * (w + h); // �ѷ� ����

	printf("�簢���� ����: %lf\n�簢���� �ѷ�: %lf", area, perimeter);

	return 0;
}

int ex1230_1(void) 
{
	float radius = 0.0, area = 0.0;
	float pi = 3.14;
	printf("���� �������� �Է��Ͻÿ�: ");
	scanf("%f", &radius);

	area = radius * radius * pi;
	printf("���� ����: %f", area);

	return 0;
}

int main(void)
{
	int x = 0;
	printf("����x�� ũ�� %d\n", sizeof(x));

	printf("char���� ũ�� %d\n", sizeof(char));
	printf("int���� ũ�� %d\n", sizeof(int));
	printf("short���� ũ�� %d\n", sizeof(short));
	printf("long���� ũ�� %d\n", sizeof(long));
	printf("float���� ũ�� %d\n", sizeof(float));
	printf("double���� ũ�� %d\n", sizeof(double));

	return 0;
}