#include<stdio.h>

int main()
{
	int i,n,fact=1;
	printf("Enter the number you want to factorial\n");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		fact= fact*i;

	}
	printf("Your enterd number's factorial is = %d",fact);
	return 0;
}