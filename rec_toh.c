/*ALGORITHM Towerofhanoi
START
Procedure Hanoi(disk, source, dest, aux)
IF disk == 1, THEN
move disk from source to dest
ELSE
Hanoi(disk - 1, source, aux, dest) // Step 1
move disk from source to dest // Step 2
Hanoi(disk - 1, aux, dest, source) // Step 3
END IF
END Procedure
STOP
*/

#include <stdio.h>
#include <stdlib.h>
void hanoi(int n, char rodFrom, char rodMiddle, char rodTo)
{
 if(n==1)
 {
 printf("Disk 1 moved from %c to %c \n",rodFrom,rodTo);
 return;
 }
 hanoi(n-1,rodFrom,rodTo,rodMiddle);
 printf("Disk %d moved from %c to %c \n",n,rodFrom,rodTo);
 hanoi(n-1,rodMiddle,rodFrom,rodTo);
}
int main()
{
 int n;
 printf("enter total number of disc\n");
 scanf("%d",&n);
 hanoi(n, 'A', 'B', 'C');
 return 0;
}