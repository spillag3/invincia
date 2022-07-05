/*ALGORITHM Factorial of a number (n)
Step 1: Start
Step 2: Declare variables n, factorial and i.
Step 3: Initialize variables
factorialâ†1
iâ†1
Step 4: Read value of n
Step 5: Repeat the steps until i=n
5.1: factorialâ†factorial*i
5.2: iâ†i+1
Step 6: Display factorial
Step 7: Stop*/



#include <stdio.h>
int main()
{
int n, i;
unsigned long long factorial = 1;
printf("Enter an integer: ");
scanf("%d",&n);
// show error if the user enters a negative integer
if (n < 0)
 printf("Error! Factorial of a negative number doesn't exist.");
 else{
for(i=1; i<=n; ++i)
{
factorial *= i; // factorial = factorial*i;
}
printf("Factorial of %d = %llu", n, factorial);
}
return 0;
}