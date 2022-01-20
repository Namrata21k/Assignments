#include<stdio.h>
#include<string.h>
#define size 100 
#define wsize 20

void main()
{
	void Longest_Word(char str[][20], int n);
	char str[size][wsize];
	int i, count = 0, num_of_words;
	printf("\n How many words to accept:- ");
	scanf("%d", &num_of_words);
	printf("\n Enter %d words:- \n \n", num_of_words);
	for (i = 0; i < num_of_words; i++)
		scanf("%s", str[i]);
	Longest_Word(str, num_of_words);
}

void Longest_Word(char str[][20], int n)
{
	int i, Max, len1, c;
	Max = strlen(str[0]);
	for (i = 1; i < n; i++)
	{
		len1 = strlen(str[i]);
		if (len1 > Max)
		{
			c = i;
			Max = len1;
		}
	}
	printf("\n The longest string among all is \"%s\" \n \n", str[c]);
}
