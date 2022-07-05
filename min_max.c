/*ALGORITHM finding maximum and minimum element
(SET Max to array[0]
SET Min to array[0]
FOR i = 1 to array length - 1
 IF array[i] > Max THEN
 SET Max to array[i]
 ELSE IF array[i] < Min THEN
 SET Min to array[i]
END IF-ELSE
END FOR
PRINT Max and Min element
*/

#include <stdio.h>
int main()
{
int i, n,max,arr[20];
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
int min=arr[0];
for(i = 1; i < n; i++)
{
// Change < to > if you want to find the smallest element
 if(arr[i] > max)
 max = arr[i];
 else if (arr[i]<min)
 min=arr[i];
}
printf("\n MAX element = %d\n MIN element=%d\n ", max,min);
return 0;
}