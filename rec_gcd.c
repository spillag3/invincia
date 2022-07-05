/*ALGORITHM euclids(m,n)
 function gcd(a, b)
if b = 0
return a;
else
return gcd(b, a mod b);
*/

 #include <stdio.h>
 int gcd(int a, int b)
{
if (b == 0)
return a;
return gcd(b, a % b);
}
int main()
{
int a ,b;
printf("Enter the value of a and b\n");
scanf("%d %d",&a,&b);
printf("GCD of %d and %d is %d ", a, b, gcd(a, b));
return 0;
}