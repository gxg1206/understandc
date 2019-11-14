#include <stdio.h>
enum animal {Dog, Monkey, Cat, Invalid};
void dog()
{
	puts("汪汪！！");
}
void monkey ()
{
	puts("唧唧！！");
}
void cat ()
{
	puts("喵～！！");
}
enum animal select()
{
	int tmp;
	do {
		printf("0...狗  1...猴  2...猫  3...结束：");
		scanf("%d", &tmp);
	} while (tmp < Dog || tmp > Invalid);
	return tmp;
}
int main ()
{
	enum animal selected;
	do {
		switch (selected = select())
		{
		case Dog: dog(); break;
		case Monkey: monkey(); break;
		case Cat: cat(); break;
		}
	}
	while (selected != Invalid);

	return 0;
}