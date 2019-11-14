#include <stdio.h>
int main ()
{
	printf("sizeof(\"123\")=%lu\n", sizeof("123"));
	printf("sizeof(\"AB\\tC\")=%lu\n", sizeof("AB\tC"));
	printf("sizeof(\"abc\\0def\")=%lu\n", sizeof("abc\0def"));
return 0;
}