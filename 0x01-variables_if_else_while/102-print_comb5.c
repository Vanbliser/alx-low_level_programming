#include <stdio.h>

/**
 * main - Write a program that prints all possible combinations
 * of two two-digit numbers.
 *
 * Description: The numbers should range from 0 to 99
 * The two numbers should be separated by a space
 * All numbers should be printed with two digits. 1 should be printed as 01
 * The combination of numbers must be separated by comma, followed by a space
 * The combinations of numbers should be printed in ascending order
 * 00 01 & 01 00 are considered as the same combination of the numbers 0 & 1
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar eight times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * Return: Return int 0 on successful completion
 */
int main(void)
{   
    size_t i = 0, j = 0, k = 0, l = 0;
    size_t a, b;

    for (i = '0'; i <= '9'; i++)
    {
        for (j = '0'; j <= '9'; j++)
        {
            a = i;
            b = j + 1;
            for (k = a; k <= '9'; k++)
            {
                for (l = b; l <= '9'; l++)
                {
                    putchar(i);
                    putchar(j);
                    putchar(' ');
                    putchar(k);
                    putchar(l);
                    if (i == '9' && j == '8' && k == '9' && l == '9')
                        break;
                    putchar(',');
                    putchar(' ');
                }
                a = '0';
                b = '0';
            }
        }
    }
    putchar('\n');
    return (0);
}
