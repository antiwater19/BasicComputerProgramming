
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

int ex1230_2(void)
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

int ex1230_3(void) // ���� ������
{
	int x = 10; // �������� ����ǥ��

	printf("10���� ��� = %d\n", x);
	printf("8���� ��� = %#o\n", x); // #�� ���̸� �տ� 0�� ���� �ٰ� ��¥ �޸�ó�� ���´�.
	printf("16���� ��� = %#x\n\n\n", x);

	return 0;
}


#define TAX_RATE 0.2 // ��ȣ��� 2
int ex1230_4(void) 
{
	const int MONTHS = 12; // ��ȣ��� 2

	int m_salary, y_salary; // ���� ���� 

	printf("������ �Է��ϼ��� "); // �Է¾ȳ���
	scanf("%d", &m_salary);
	y_salary = MONTHS * m_salary;
	printf("������ %d�Դϴ�.\n", y_salary);
	printf("������ %30.25f�Դϴ�.\n", y_salary * TAX_RATE);
	return 0;
}

int ex1230_5(void)
{ // ���迡 ����
	char code1 = 'A'; //���� ����� �ʱ�ȭ
	char code2 = 65; //�ƽ�Ű �ڵ�� �ʱ�ȭ
	printf("code1 = %c\n", code1);
	printf("code2 = %c\n", code1 + 1); // code1 + 1 �ϸ� �ƽ�Ű �ڵ� ǥ��� B���� B�� ��µȴ�.
	printf("code1 = %d\n", code1); // �ƽ�Ű �ڵ�� ǥ���ȴ�.
	printf("code2 = %d\n", code1 + 1);

	return 0;
}

#define SPEED 300000.000000 // ���� �ӵ�
int main(void)
{
	const double distance= 149600000.000000; // ������ �¾���� �Ÿ�

	double time;

	time = distance / SPEED; // �� ���� �ð�
	printf("���� �ӵ� %lf km/s\n", SPEED);
	printf("�¾�� �������� �Ÿ� %lf km\n", distance);
	printf("���� �ð� : %lf\n", time);
	
	return 0;
}