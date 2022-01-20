#include<stdio.h>
int main(void)
{
	long number =0;
	int num0 = 0;
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int num5 = 0;
	int num6 = 0;
	int num7 = 0;
	int num8 = 0;
	int num9 = 0;
	int reminder;
	
	printf("Enter A number:\n");
	scanf("%ld", &number);

	while (number!= 0)
	{
		reminder = number % 10;
		switch (reminder)
		{
		case 0:
			num0++;
			break;
		case 1:
			num1++;
			break;
		case 2:
			num2++;
			break;
		case 3:
			num3++;
			break;
		case 4:
			num4++;
			break;
		case 5:
			num5++;
			break;
		case 6:
			num6++;
			break;
		case 7:
			num7++;
			break;
		case 8:
			num8++;
			break;
		case 9:
			num9++;
			break;
		default:
			printf("Enter Valid Number");
			break;
		}
		number = number / 10;
	}
	printf("\n 0 has Occured %d Times", num0);
	printf("\n 1 has Occured %d Times", num1);
	printf("\n 2 has Occured %d Times", num2);
	printf("\n 3 has Occured %d Times", num3);
	printf("\n 4 has Occured %d Times", num4);
	printf("\n 5 has Occured %d Times", num5);
	printf("\n 6 has Occured %d Times", num6);
	printf("\n 7 has Occured %d Times", num7);
	printf("\n 8 has Occured %d Times", num8);
	printf("\n 9 has Occured %d Times", num9);
	printf("\n\n");

	return(0);
}
	