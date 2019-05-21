#include <stdio.h>

#define YEAR 2010
int main()
{
	const int AGE=20;

	printf("올해는 %d년 입니다.\n", YEAR);
	printf("내 나이는 %d살입니다.\n", AGE);
	printf("나는 %d년에 태어나 %d번째 해가 되었습니다.\n", YEAR-20, AGE);
	printf("내 동생의 나이는 %d살입니다.\n", AGE-2);
	printf("내 동생은 %d년에 태어나 %d번째 해가 되었습니다.\n", YEAR-28, AGE-2);

	return 0;
}
