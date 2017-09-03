#include <stdio.h>
#include <conio.h>

void main()
{
int i, N, oddSum = 0;
clrscr();
printf(" the values from 1 to 15");
for (i = 1; i <=15; i++)
{
sum = sum + i;
}
printf(" the odd values between 15 to 45");
for (i=15; i <=45; i++)
{
if (i % 2 != 0)
oddSum = oddSum + i;
}
printf ("Sum of all odd numbers = %d\n", oddSum);
}
