#include <stdio.h>
void put_strary(const char s[][128], int n)
{
	int i;
	for (i = 0)
		printf("s[%d]=\"%s\"\n", i, s[i]);
}
int main()
{
	char cs[][128] = {0};
	put_strary(cs, 3);
	scanf("%s", cs[i][128]);
	return 0;
}