#include<stdio.h>

int main(void)
{
    char expression[50];
    int x = 0, i = 0;
    printf("\nEnter an Expression:\n\n");
    scanf("%s", expression);

    while (expression[i] != '\0')
    {

        if (expression[i] == '(' || expression[i] == '[' || expression[i] == '{')
        {
            x++;
        }

        else if (expression[i] == ')' || expression[i] == ']' || expression[i] == '}')
        {
            x--;
            if (x < 0)
                break;
        }
        i++;
    }

    if (x == 0)
    {
        printf("\nExpression is balanced\n");
    }

    else
    {
        printf("\nExpression is unbalanced\n");
    }

    return (0);
}
