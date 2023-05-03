#include <stdio.h>
#include <conio.h>
int main()
{
	int i,n;
	printf("\nENTER A NUMBER: ");
	scanf("%d",&n);
	printf("\nODD NUMBERS BETWEEN 1 AND %d ARE: \n",n);
	for(i=1;i<=n;i+=2)
	{
		printf("%d ",i);
	}
	getch();
	return 0;
}
