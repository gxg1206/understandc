#include <stdio.h>
void alert (int n)
{
	int i;
	for(i=1;i<=n;i++)
		putchar('\a');
}
 int main ()
 {
 	int i ;	
 	scanf("%d",&i);
 	alert(i);
 	return 0;
 }