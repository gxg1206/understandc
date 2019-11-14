#include <stdio.h>
#include <string.h>
#define num 10
int main ()
{
	int i;
	char s[num][100];
	for (i = 0; i < num; i++)
	{
		printf("s[%d]:", i);
		scanf("%s", s[i]);
		if (strcmp(s[i], "$$$$$") == 0)
		{
			break;
		}
	}

	for (int i = 0; i < num; i++)
	{
		if (strcmp(s[i], "$$$$$") == 0)
			break;
		else 
			printf("s[%d]=\"%s\"\n", i, s[i] );
	}
	return 0;
}