#include<stdio.h>
int main()
{
	int i, a;
	int sum = 0;
	int z = 0;
	printf("Enter number : ");
	scanf_s("%d", &i);
	for (a = 1; a < i; a++)
		if (i % a == 0)
		{
			if (z == 0)
			{
				printf("P(%d)= %d",i, a);
				z++;
			}
			else printf("+%d", a);
			
			
			sum += a;
		}
	
	printf("= %d", sum);
	return 0;
}