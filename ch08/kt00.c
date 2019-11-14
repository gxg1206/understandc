#include <stdio.h>
#include<stdlib.h>
enum triangle { Ordinary, Congruent, Isosoceles, Nothing};
void ordinary(void)
{puts("普通三角形");}
void congruent(void)
{puts("等边三角形");}
void isosoceles(void)
{puts("等腰三角形");}
enum triangle select(int a, int b, int c);
{
	if ((a+b>c||a+c>b || b+c>a) && (abs(a-b)<c || abs(a-c)<b || abs(b-c)<a))
	{	if ((a == b || a == c || b == c) && (a != b && a != c && b != c))
			return congruent;
		if (a == b && b == c)
			return isosoceles;
	}
	else
	return nothing ;
}
int main ()
switch (selected=select())
{case Ordinary:ordinary();break;
case Congruent:congruent();break;
case Isosoceles:isosoceles();break;
case Nothing:nothing();break;}
return 0;





