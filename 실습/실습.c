#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


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

#include <math.h>
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

int main(void) // 실습 과제
{
	double real1 = 0, real2 = 0;

	printf("2개의 실수를 입력하시오 : ");
	scanf("%lf %lf", &real1, &real2);

	printf("합의 정수부 = %d", (int)real1 + (int)real2);
	return 0;
}