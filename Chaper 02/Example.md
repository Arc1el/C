ex 2-1 printf함수
```c
#include <stdio.h>
int main ()
{
	printf("Hello C world \n");

	return 0;
}
```

ex 2-3 특수문자
```c
#include <stdio.h>
int main ()
{
	printf("\t Hello C! \n Hello world! \n");
	printf("큰따옴표 : \" \" \n");
	printf("작은따옴표 : \' \' \n");
	printf("역슬래시 : \\ \n");

	return 0;
}
```

ex 2-4 숫자 출력하기
```c
#include <stdio.h>
int main ()
{
	printf("%d 더하기 %d 는 %d 입니다.\n", 3, 5, 3+5);
	printf("%o 더하기 %i 는 %i 입니다.\n", 3, 5, 3+5);
	printf("%d - %d 는 %d 입니다.\n", 3, 5, 3+5);
	printf("%i - %i 는 %i 입니다.\n", 3, 5, 3+5);

	return 0;
}
```
ex 2-5
```c
#include <stdio.h>
int main ()
{
	printf("10진수 : %d는 16wlstn : %x, 8진수 : %o입니다. \n", 50, 50, 50);
	printf("10진수 : %d는 16wlstn : %x, 8진수 : %o입니다. \n", -50, -50, -50);
	//16진수와 8진수는 음수표현 불가

	return 0;
}
```
