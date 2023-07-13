#include <stdio.h>
#include <stdlib.h>

/**
 * str_length - calculate the lenght of str
 * @str: string
 * Return: lenght
 */
int str_length(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * is_valid_number - checks if the number is valid
 * @str: string to be checked
 * Return: zero or one
 */
int is_valid_number(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * multiply - multiply num1 and num2
 * @num1: first number
 * @num2: second number
 */
void multiply(char *num1, char *num2)
{
	int start = 0;
	int i, j, carry, digit1, digit2, temp;
	int len1 = str_length(num1);
	int len2 = str_length(num2);
	int result_len = len1 + len2;
	int *result = calloc(result_len, sizeof(int));

	if (result == NULL)
	{
		printf("Error\n");
		exit(1);
	}
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		digit1 = num1[i] - '0';
		for (j = len2 - 1; j >= 0; j--)
		{
			digit2 = num2[j] - '0';
			temp = digit1 * digit2 + result[i + j + 1] + carry;
			result[i + j + 1] = temp % 10;
			carry = temp / 10;
		}
		if (carry > 0)
		{
			result[i + j + 1] += carry;
		}
	}
	while (start < result_len - 1 && result[start] == 0)
	{
		start++;
	}
	for (i = start; i < result_len; i++)
	{
		printf("%d", result[i]);
	}
	printf("\n");
	free(result);
}

/**
 * main -  program that multiplies two positive numbers.
 * @argc: number of argument passed
 * @argv: string passed
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	if (!is_valid_number(num1) || !is_valid_number(num2))
	{
		printf("Error\n");
		return (98);
	}

	multiply(num1, num2);

	return (0);
}
