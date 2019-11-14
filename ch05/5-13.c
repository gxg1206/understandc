#include <stdio.h>
int main ()
{
	int i , j;
	int gradeA[4][3] = {12, 34, 53, 45, 32, 45, 32, 53, 45, 54, 53, 45};
	int gradeB[4][3] = {25, 34, 65, 36, 43, 56, 43, 56, 43, 56, 43, 56};
	int sum[4][3];
	sum[i][j] = gradeA[i][j] + gradeB[i][j];
// for ( i = 0; i < 4; i++)
// {
// 	for(j=0;j<3;j++)
// 		sum[i][j]=gradeA[i][j]+gradeB[i][j];
// }
	puts("第一次考试分数");
	for ( i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%4d", gradeA[i][j] );
		putchar('\n');
	}
	puts("第二次考试分数");
	for ( i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%4d", gradeB[i][j] );
		putchar('\n');
	}
	puts("总分");
// for ( i = 0; i < 4; i++)
// {
// 	for(j=0;j<3;j++)
// 		printf("%4d",sum[i][j] );
// 	putchar('\n');
// }
//return 0;
	{	printf("%4d\n", sum[i][j]);
		putchar('\n');
	}
	return 0;
}