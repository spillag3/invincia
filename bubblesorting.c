/*algorithm bubblesort
begin BubbleSort(arr)  
   for all array elements  
      if arr[i] > arr[i+1]  
         swap(arr[i], arr[i+1])  
      end if  
   end for     
   return arr     
end BubbleSort */

#include<stdio.h>
int main()
{
int array[100], n, i, j, temp;
printf("Enter number of elements\n");
scanf("%d", &n);
printf("Enter %d Numbers:\n", n);
for(i = 0; i < n; i++)
scanf("%d", &array[i]);
for(i = 0 ; i < n - 1; i++)
{
for(j = 0 ; j < n-i-1; j++)
{
if(array[j] > array[j+1])
{
temp=array[j];
array[j]=array[j+1];
array[j+1]=temp;
}
}
}
printf("Sorted Array:\n");
for(i = 0; i < n; i++)
printf("%d\t", array[i]);
return 0;
}