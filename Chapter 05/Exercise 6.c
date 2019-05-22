#include <stdio.h>
#define LIVE 100
#define CIGAR 2
int main()
{
	int live_minutes;
	int now;

	live_minutes=LIVE*365*24*60; // 인간수명 100년을 분으로 환산

	now=live_minutes-CIGAR*24*60*365*20;

	printf("단축된 수명은 %d분입니다.\n",now);
	
	return 0;
}
