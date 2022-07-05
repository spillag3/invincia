/*ALGORITHM Factorial of a number(n)
Step 1: Start
Step 2: Read number n
Step 3: If n==1 then return 1
Step 4: else return
n*factorial(n-1)
Step 4: Stop
*/

#include <stdio.h>
int factorial(int);
int main()
{
 int num,result;
 printf("Enter a number to find it's Factorial: ");
 scanf("%d", &num);
 if (num < 0)
 {
 printf("Factorial of negative number not possible\n");
 }
 else
 {
 result = factorial(num);
 printf("The Factorial of %d is %d.\n", num, result);
 }
return 0;
}
int factorial(int num)
{
if (num == 0 || num == 1)
{
return 1;
}
else
{
return(num * factorial(num - 1));
}
}