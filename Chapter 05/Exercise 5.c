#include <stdio.h>

int main()
{
	float exchange=1194.8;
	float dollar;

	printf("달러->원화 출력 프로그램 \n");
	printf("달러를 입력하세요 : ");
	scanf("%f", &dollar);

	printf("%.2f달러는 원화로 %.2f원입니다.\n", dollar, dollar*exchange);

	return 0;
}
