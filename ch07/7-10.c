#include<stdio.h>
#include<math.h>
double dist(double x1, double y1, double x2, double y2)
{
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
int main(void)
{
	double x1, y1, x2, y2;
	printf("点1...x坐标：");
	scanf("%lf", &x1);
	printf("点1...y坐标：");
	scanf("%lf", &y1);
	printf("点2...x坐标：");
	scanf("%lf", &x2);
	printf("点2...y坐标：");
	scanf("%lf", &y2);
	printf("两点之间的距离为；%lf。\n", dist(x1, y1, x2, y2) );
	return 0;



}