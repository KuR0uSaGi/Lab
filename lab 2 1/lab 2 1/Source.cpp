#include<stdio.h>
int main()
{
	int a;
	int sum = 0;
	int suma = 0;
	printf("enter number :");
	scanf_s("%d", &a);
	while(a>0)
	{
		
		sum += a%10;
		a /= 10;
		
	}printf("%d\n", sum);
	while (sum > 0)
	{
		suma += sum % 10;
		sum /= 10;
	}
	printf("%d", suma);
	return 0;
}