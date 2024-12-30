/* 첫번째 프로그래밍*/
#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>

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

int main(void)
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