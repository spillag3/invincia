/*ALGORITHM finding max element
SET Max to array[0]
FOR i = 1 to array length - 1
IF array[i] > Max THEN
SET Max to array[i]
ENDIF
ENDFOR
PRINT Max*/

#include <stdio.h>
int main()
{
int i, n,max;
int arr[100];
printf("Enter total number of elements(1 to 100): ");
scanf("%d", &n);
printf("\n");
// Stores number entered by the user
for(i = 0; i < n; i++)
{
printf("Enter Number %d: ", i+1);
scanf("%d", &arr[i]);
}
// Loop to find largest number
max=arr[0];
for(i = 1; i < n; i++)
{
// Change < to > if you want to find the smallest element
if(arr[i] > max)
max = arr[i];
}
printf("Largest element = %d", max); 
}