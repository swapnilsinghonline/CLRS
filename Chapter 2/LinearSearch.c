//Program to implement Linear Search. Problem 2.1.3
#include <stdio.h>
 
int main(void)
{
   int A[50], key, i, n;
 
   printf("Enter the number of elements in array\n");
   scanf("%d",&n);
   
   for (i = 0; i < n; i++)
      scanf("%d", &A[i]);
 
   printf("Enter the number to search\n");
   scanf("%d", &key);
 
   for (i = 0; i < n; i++)
   {
      if (A[i] == key)
      {
         printf("%d is present at  %d.\n", key, i+1);
         break;
      }
   }
   if (i == n)
      printf("%d is not present in array.\n", key);
 
   return 0;
}
