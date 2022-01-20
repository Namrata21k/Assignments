#include <stdio.h>

int findOccurrence(int num, int digit)
{
    int reminder, count;

    count = 0;
    while (num > 0)
    {
        reminder = num % 10;
        if (reminder == digit)
            count++;
        num /= 10;
    }
    return count;
}

int main()
{
    int num, digit, count;

    printf("Enter a number\n");
    scanf("%d", &num);
    printf("Enter digit to search: \n");
    scanf("%d", &digit);

    count = findOccurrence(num, digit);

    printf("\nTotal occurrence of digit %d is: %d in number: %d.\n", digit, count, num);

    return (0);
}
