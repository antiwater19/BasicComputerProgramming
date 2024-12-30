
/* 첫번째 프로그래밍*/
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

int ex1230_2(void)
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
int main(void)
{
	const double distance= 149600000.000000; // 지구와 태양과의 거리

	double time;

	time = distance / SPEED; // 빛 도달 시간
	printf("빛의 속도 %lf km/s\n", SPEED);
	printf("태양과 지구와의 거리 %lf km\n", distance);
	printf("도달 시간 : %lf\n", time);
	
	return 0;
}