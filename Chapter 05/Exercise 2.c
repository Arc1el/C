#include <stdio.h>
int main()
{
	int a, b, small;

	printf("input : ");
	scanf("%d", &a);
	printf("input : ");
	scanf("%d", &b);

	small=a<b?a:b;

	printf("Smaller Number : %d\n", small);

	return 0;
}
