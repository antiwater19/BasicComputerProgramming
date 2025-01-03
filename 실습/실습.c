﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int ex1226(void) { 
	printf("첫번째 프로그래밍입니다.\n");
	return 0;
}

int ex1227_1() {

	int x = 100, y = 200, sum;
	sum = x + y;
	printf("두 수의 합: %d\n\n\n", sum);

	return 0;
}

int ex1227_2() {
	int num1 = 100, num2 = 200;
	float hop;
	hop = num1 + num2;
	printf("두 수의 합(변수명 변경): %f\n\n\n", hop);

	return 0;
}

int ex1227_3() {
	int x, y, sum, diff, mul, div;
	//x = 20;
	//y = 10;
	printf("첫번째 정수 넣어주세요");
	scanf("%d", &x);
	printf("두번째 정수 넣어주세요");
	scanf("%d", &y);
	//sum = x + y;
	//diff = x - y;
	//mul = x * y;
	//div = x / y;
	printf("두수의 합: %d\n", x + y);
	printf("두수의 차: %d\n", x - y);
	printf("두수의 곱: %d\n", x * y);
	printf("두수의 몫: %d\n", x / y);

	return 0;
}

int ex1227_4() { // 202003051 이민수 실습
	double w = 0, h = 0, area, perimeter;
	// w는 너비 h는 높이

	printf("너비를 입력하시오: ");
	scanf("%lf", &w); // 너비 입력
	printf("높이를 입력하시오: ");
	scanf("%lf", &h); // 높이 입력
	area = w * h; // 사각형 넓이
	perimeter = 2 * (w + h); // 둘레 길이

	printf("사각형의 넓이: %lf\n사각형의 둘레: %lf", area, perimeter);

	return 0;
}

int ex1230_1(void) 
{
	float radius = 0.0, area = 0.0;
	float pi = 3.14;
	printf("원의 반지름을 입력하시오: ");
	scanf("%f", &radius);

	area = radius * radius * pi;
	printf("원의 면적: %f", area);

	return 0;
}

int ex1230_2(void) //ex1230_2
{
	int x = 0;
	printf("변수x의 크기 %d\n", sizeof(x));

	printf("char형의 크기 %d\n", sizeof(char));
	printf("int형의 크기 %d\n", sizeof(int));
	printf("short형의 크기 %d\n", sizeof(short));
	printf("long형의 크기 %d\n", sizeof(long));
	printf("float형의 크기 %d\n", sizeof(float));
	printf("double형의 크기 %d\n", sizeof(double));

	return 0;
}

int ex1230_3(void) // 형식 지정자
{
	int x = 10; // 여러가지 진수표현

	printf("10진수 출력 = %d\n", x);
	printf("8진수 출력 = %#o\n", x); // #을 붙이면 앞에 0이 따로 붙고 진짜 메모리처럼 나온다.
	printf("16진수 출력 = %#x\n\n\n", x);

	return 0;
}


#define TAX_RATE 0.2 // 기호상수 2
int ex1230_4(void) 
{
	const int MONTHS = 12; // 기호상수 2

	int m_salary, y_salary; // 변수 선언 

	printf("월급을 입력하세요 "); // 입력안내문
	scanf("%d", &m_salary);
	y_salary = MONTHS * m_salary;
	printf("연봉은 %d입니다.\n", y_salary);
	printf("세금은 %30.25f입니다.\n", y_salary * TAX_RATE);
	return 0;
}

int ex1230_5(void)
{ // 시험에 나옴
	char code1 = 'A'; //문자 상수로 초기화
	char code2 = 65; //아스키 코드로 초기화
	printf("code1 = %c\n", code1);
	printf("code2 = %c\n", code1 + 1); // code1 + 1 하면 아스키 코드 표기상 B여서 B로 출력된다.
	printf("code1 = %d\n", code1); // 아스키 코드로 표현된다.
	printf("code2 = %d\n", code1 + 1);

	return 0;
}

#define SPEED 300000.000000 // 빛의 속도
int ex1230_6(void) // 실습
{
	const double distance= 149600000.000000; // 지구와 태양과의 거리

	double time;

	time = distance / SPEED; // 빛 도달 시간
	printf("빛의 속도 %lf km/s\n", SPEED);
	printf("태양과 지구와의 거리 %lf km\n", distance);
	printf("도달 시간 : %lf\n", time);
	
	return 0;
}

int ex1231_1(void) // inch를 cm으로 바꾸는 실습
{
	const double inch_weight = 2.54; // 기호상수 선언(변수가 바뀌지 않음)
	double inch = 0;

	printf("inch를 입력하시오: ");
	scanf("%lf", &inch); 

	printf("%lfinch는 %lfcm 입니다.", inch, inch * inch_weight);

	return 0;
}

void ex1231_2(void)
{
	int x, y, result;

	printf("enter integer 2: ");
	scanf("%d%d", &x, &y);

	result = x + y;
	printf("%d + %d = %d\n", x, y, result);
	result = x - y;
	printf("%d - %d = %d\n", x, y, result);
	result = x * y;
	printf("%d * %d = %d\n", x, y, result);
	result = x / y;
	printf("%d / %d = %d\n", x, y, result);
	result = x % y;
	printf("%d %% %d = %d\n", x, y, result);
}

#define SEC_PER_MINUTE 60 // 1분은 60초

int ex1231_3(void)
{
	int input, minute, second;

	printf("초를 입력하시오 : ");
	scanf("%d", &input); // 초단위의 시간을 읽는다.

	minute = input / SEC_PER_MINUTE; // 몇 분
	second = input % SEC_PER_MINUTE; // 몇 초

	printf("%d초는 %d분 %d초입니다. \n", input, minute, second);
	return 0;
}

int ex1231_4(void) // 증감 연산자
{
	int x = 10, y = 10;

	printf("x = %d\n", x);
	printf("x++의 값 = %d\n", ++x);
	printf("x = %d\n\n", x);

	printf("y=%d\n", y);
	printf("y++의 값=%d\n", y++);
	printf("y=%d\n", y);

	return 0;
}

int ex1231_5(void) // 복합 대입 연산자
{
	int x = 10, y = 10, z = 33;

	x += 1; // x = x + 1
	y *= 2; // y = y * 2
	z %= x + y; // z = z % (x + y)

	printf("x = %d y = %d z = %d \n", x, y, z);
	return 0;
}

int ex1231_6(void)
{
	int x, y;

	printf("두개의 정수를 입력하시오: ");
	scanf("%d %d", &x, &y);

	printf("x == y의 결과는 ? : %d", x == y);
}

//#include <math.h>
int ex1231_7(void) // 오차 범위
{
	double a, b;
	a = (0.3 * 3) + 0.1;
	b = 1;
	printf("a==b의 결과 %d \n", a == b); // 0은 거짓 1은 참 같은건데 인식을 못함

	printf("fabs(a-b)<0.00001의 결과: %d", fabs(a - b) < 0.00001);
	return 0;
}

int ex1231_8(void) // Lab: 윤년
{
	int year, result;

	printf("연도를 입력하시오 : "); // 연도 입력
	scanf("%d", &year);

	result = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
	//printf("result = %d\n", result); // 결과

	(result == 1) ? printf("윤년입니다\n") : printf("윤년이 아닙니다.\n"); // ? : 는 조건 연산자 이다.
	printf((result == 1) ? printf("윤년입니다\n") : printf("윤년이 아닙니다.\n"));
	
	return 0;
}

int ex1231_9(void) // 자동적 형변환, 명시적 형변환
{
	int i;
	double f;
	
	f = 5 / 4;
	printf("%lf\n", f);

	f = (double)5 / 4;
	printf("%lf\n", f);

	f = 5.0 / 4;
	printf("%lf\n", f);

	f = (double)5 / (double)4;
	printf("%lf\n", f);

	i = 1.3 + 1.8;
	printf("%d\n", i);

	i = (int)1.3 + (int)1.8;
	printf("%d\n", i);

	return 0;
}

int ex1231_10(void) // 실습 과제
{
	double real1 = 0, real2 = 0;

	printf("2개의 실수를 입력하시오 : ");
	scanf("%lf %lf", &real1, &real2);

	printf("합의 정수부 = %d", (int)real1 + (int)real2);
	return 0;
}

int ex0102_1(void) // 아침 실습 과제 
{
	int x = 0, y = 0;
	printf("x, y 좌표값을 차례로 넣으시오. \n>> ");
	scanf("%d %d", &x, &y);

	// 원점 위치
	(x == 0 && y == 0) ? printf("원점입니다.") : printf("");

	// 축 위치
	(x == 0 && y != 0) ? printf("x축위에 위치합니다.") : printf("");
	(x != 0 && y == 0) ? printf("y축위에 위치합니다.") : printf("");
	
	// 사분면 위치
	(x > 0 && y > 0) ? printf("1사분면") : printf("");
	(x < 0 && y > 0) ? printf("2사분면") : printf("");
	(x < 0 && y < 0) ? printf("3사분면") : printf("");
	(x > 0 && y < 0) ? printf("4사분면") : printf("");

	return 0;
}

int ex0102_2(void) // Lab: 윤년 (조건문ver)
{
	int year, result;

	printf("연도를 입력하시오 : "); // 연도 입력
	scanf("%d", &year);

	result = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);

	// 조건문
	if (result == 1) { 
		printf("윤년입니다.\n");
	}
	else if (result == 0) {
		printf("윤년이 아닙니다.\n");
	}
	
	return 0;
}

int ex0102_3(void) // 성적을 입력 받아서 결정하는 프로그램
{
	int score = 0;
	char level = NULL;

	printf("성적을 입력하시오: ");
	scanf("%d", &score);
	//printf("level을 입력하세요");
	//scanf("%c", &level);

	if (score >= 90) {
		if (score >= 95)
			printf("합격 학점: A+\n");
		else if (score < 95)
			printf("합격 학점: A0\n");
	}
	else if (score >= 80) {
		if (score >= 85)
			printf("합격 학점: B+\n");
		else if (score < 85)
			printf("합격 학점: B0\n");
	}
	else if (score >= 70) {
		if (score >= 75)
			printf("합격 학점: C+\n");
		else if (score < 75)
			printf("합격 학점: C0\n");
	}
	else if (score >= 60) {
		if (score >= 65)
			printf("합격 학점: D+\n");
		else if (score < 65)
			printf("합격 학점: D0\n");
	}
	else {
		printf("불합격 학점:F\n");
	}

	return 0;
}

int ex0102_4(void) // 이차 방정식
{
	double a = 0.0, b = 0.0, c = 0.0, dis = 0.0;

	printf("계수 a, 계수 b, 계수 c를 차례대로 입력하시오: ");
	scanf("%lf %lf %lf", &a, &b, &c);

	if (a == 0) {
		printf("방정식의 근은 %f입니다.\n", -c/b);
	}
	else {
		dis = (b * b - (4.0 * a * c)); //판별식을 구한다
		
		if (dis >= 0) {
			printf("방정식의 근은 %f입니다\n", ((-b + sqrt(dis)) / 2.0 * a));
			printf("방정식의 근은 %f입니다\n", ((-b - sqrt(dis)) / 2.0 * a));
		}
		else
			printf("실근이 존재하지 않습니다.\n");
	}
}

int ex0102_5(void)
{
	char op;
	int x = 0, y = 0, result = 0;

	printf("수식을 입력하시오 : ");
	printf("(예: 2 + 5)\n");
	printf(">>");
	scanf("%d %c %d", &x, &op, &y);

	switch(op)
	{
	case '+':
		printf("%d %c %d = %d\n", x, op, y, x + y);
		break;
	case '-':
		printf("%d %c %d = %d\n", x, op, y, x - y);
		break;
	case '*':
		printf("%d %c %d = %d\n", x, op, y, x * y);
		break;
	case '/':
		printf("%d %c %d = %d\n", x, op, y, x / y);
		break;
	case '%':
		printf("%d %c %d = %d\n", x, op, y, x % y);
		break;
	default:
		printf("연산자가 올바르지 않습니다. 다시 입력해주세요.\n\n\n");
		break;
	}
	return 0;
}

int ex0102_6(void) // switch case를 if else문으로 변경
{
	char op;
	int x = 0, y = 0, result = 0;

	printf("수식을 입력하시오 : ");
	printf("(예: 2 + 5)\n");
	printf(">>");
	scanf("%d %c %d", &x, &op, &y);

	if (op == '+')
		printf("%d %c %d = %d\n", x, op, y, x + y);
	else if (op == '-')
		printf("%d %c %d = %d\n", x, op, y, x - y);
	else if (op == '*')
		printf("%d %c %d = %d\n", x, op, y, x * y);
	else if (op == '/')
		printf("%d %c %d = %d\n", x, op, y, x / y);
	else if (op == '%')
		printf("%d %c %d = %d\n", x, op, y, x % y);
	else
		printf("지원되지 않는 연산자입니다. \n");

	return 0;
}

int ex0103_1(void) // 아침 실습
{
	int x=0, y=0;

	printf("x,y 좌표값을 차례로 넣으시오 .\n");
	printf(">>");
	scanf("%d %d", &x, &y);

	if (x == 0 && y == 0) {
		printf("원점입니다.\n");
	}
	else if (x == 0 && y != 0) {
		printf("y축 위에 위치합니다.\n");
	}
	else if (x != 0 && y == 0) {
		printf("x축 위에 위치합니다.\n");
	}
	else if (x > 0 && y > 0) {
		printf("1사분면\n");
	}
	else if (x < 0 && y > 0) {
		printf("2사분면\n");
	}
	else if (x < 0 && y < 0) {
		printf("3사분면\n");
	}
	else if (x > 0 && y < 0) {
		printf("4사분면\n");
	}

	return 0;
}

int ex0103_2(void)
{
	int n = 0, i = 1, sum = 0;
	printf("합을 구하는 것\n");
	scanf("%d", &n);

	while (i <= n)  // 안에 있는 내용이 참이면 계속 반복
	{
		sum = sum + i; // sum += i ;
		i++;
	}
	printf("%d", sum);
	return 0;
}

int ex0103_3(void) // 예제 #2
{
	int n = 0;

	printf("========================\n");
	printf("    n          n의 제곱 \n");
	printf("========================\n");

	n = 1;
	while (n <= 10)
	{
		printf("%5d      %5d\n", n, n * n);
		n++;
	}
	return 0;
}

int ex0103_4(void) // 예제 #5
{
	int n = 0, sum = 0, i = 5;

	printf("정수 다섯개를 차례로 입력하시오:");
	while (i)// while(count < 5)
	{
		i--;
		scanf("%d", &n);
		sum += n;
	}
	printf("5개 정수의 합은 %d입니다.\n", sum);
	return 0;
}

int ex0103_5(void) // 원하는 만큼 학생 성적 입력후 평균 구하기 (세티널)
{
	int score = 0, grade = 0, sum = 0, n = 0;
	double average = 0.0;

	while (grade >= 0)
	{
		printf("성적을 입력하시오: ");
		scanf("%d", &grade);

		sum += grade;
		n++;
	}
	// 보초값 수정
	sum = sum - grade; 
	n--;

	average = sum / n;
	printf("학생들의 성적 평균은: %lf", average);

	return 0;
}

int ex0103_6(void)
{
	int n = 0, i = 1, sum = 0;
	printf("누적 합을 구하는 것\n");
	scanf("%d", &n);

	//while (i <= n)  // 안에 있는 내용이 참이면 계속 반복
	//{
	//	sum = sum + i; // sum += i ;
	//	i++;
	//}
	// for문으로 변경
	for (int j = 1; j <= n; j++) {
		sum += j;
	}

	printf("%d", sum);
	return 0;
}

int ex0103_7(void)
{
	int n = 0;

	printf("========================\n");
	printf("    n          n의 제곱 \n");
	printf("========================\n");

	/*while (n <= 10)
	{
		printf("%5d      %5d\n", n, n * n);
		n++;
	}*/
	// for문으로 변경 시킨것 
	for (int i = 1; i <= 10; i++) {
		printf("%5d      %5d\n", i, i * i * i); // 세제곱
	}

	return 0;
}

int ex0103_8(void)
{
	int fact = 1;
	int i, n;
	printf("정수를 입력하세요:");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		fact *= i;
	}
	printf("%d!는 %d입니다.\n", n, fact);
	return 0;
}

int main(void)
{
	int fact = 1;
	int i = 1, n;
	printf("정수를 입력하세요:");
	scanf("%d", &n);

	while (i <= n) {
		fact *= i;
		i++;
	}
	printf("%d!는 %d입니다.\n", n, fact);
	return 0;
}

