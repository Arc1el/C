#include <stdio.h>
int main()
{
	int a, b, c;
	int s1, s2, s3;

	printf("input : ");
	scanf("%d", &a);
	printf("input : ");
	scanf("%d", &b);
	printf("input : ");
	scanf("%d", &c);

	s1=a>b?a:b;
	s2=b>c?b:c;
	s3=s1>s2?s1:s2;

	printf("Biggest Number : %d\n", s3);

	return 0;
}
