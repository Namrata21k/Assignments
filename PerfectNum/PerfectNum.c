#include<stdio.h>

int main(Void)
{
	long number;
	int i = 1;
	int sum = 0;

	printf("Enter A Number\n");
	scanf("%ld", &number);

	while(i < number)
	{
		if (number % i == 0)
		{
			sum = sum + i;

		}
		i++;
	}
	if (sum == number)
	{
		printf("\n %ld is Perfect Number\n", number);
	}
	else
	{
		printf("\n %ld is Perfect Not a Number\n", number);
	}
	return(0);
}