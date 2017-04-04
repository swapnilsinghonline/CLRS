// C program for insertion sort
#include <stdio.h>


void insertion(int A[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = A[i];
       j = i-1;
       while (j >= 0 && A[j] > key)
       {
           A[j+1] = A[j];
           j = j-1;
       }
       A[j+1] = key;
   }
}


int main(void)
{
  int A[50] , n=0 , i=0 , key;
  printf("Enter length of array. (Less than 50)\n");
  scanf("%d\n",&n);
  printf("Enter array to be Sorted\n");
  for (i=0;i<n;i++)
  {
    scanf("%d\n",&A[i]);
   }
  insertion(A,n);
  
  printf("Sorted Array\n");
  
  for (i=0;i<n;i++)
  {
    printf("%d\t",A[i]);
   }
  return 0;
 }
