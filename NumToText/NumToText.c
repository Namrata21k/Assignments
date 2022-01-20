#include<stdio.h>    
#include<stdlib.h>  
int main() 
{
	long int number, sum = 0, reminder;

	printf("Enter the number=");
	scanf("%ld", &number);
	 while (number > 0)
	{
		reminder =number % 10;
		sum = sum*10  + reminder;
		number = number / 10;
	}
	number = sum; 
	while (number > 0)
	{
		reminder = number % 10;
		switch (reminder)
		{
		case 0:
			printf("zero ");
			break;
		case 1:
			printf(" one ");
			break;
		case 2:
			printf(" Two ");
			break;
		case 3:
			printf(" Three ");
			break;
		case 4:
			printf(" Four ");
			break;
		case 5:
			printf(" Five ");
			break;
		case 6:
			printf(" Six ");
			break;
		case 7:
			printf(" Seven ");
			break;
		case 8:
			printf(" Eight ");
			break;
		case 9:
			printf(" Nine ");
			break;
		default:
			printf("Please Try Again..!");
			break;
		}
		number = number / 10;
	}
	printf("\n\n");
	return 0;
}