#include <stdio.h>
int main()
{
	int i , ch;
	int cnt[10] = {0};
	while ((ch = getchar()) != EOF)
	{
		switch (ch)
		{
		case'0': cnt[0]++; break;
		case'1': cnt[0]++; break;
		case'2': cnt[0]++; break;
		case'3': cnt[0]++; break;
		case'4': cnt[0]++; break;
		case'5': cnt[0]++; break;
		case'6': cnt[0]++; break;
		case'7': cnt[0]++; break;
		case'8': cnt[0]++; break;
		case'9': cnt[0]++; break;
		}
	}
	puts("数字字符出现的次数")；
	for (i = 0; i < 10; i++)
		printf("'%d'=%d\n", i, cnt[i] );
	return
}