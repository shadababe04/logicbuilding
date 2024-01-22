#include <stdio.h>
int CountSetBits(int n)
{
    int count = 0;
    while (n)
      {
        count += n & 1;
        n >>= 1;  
      }
    return count;
}
int main(void) {
  printf("Hello World\n");
  int n;
  printf("Enter the number : ");
  scanf("%d",&n);
  printf("The number of set bits in %d is %d",n,CountSetBits(n));
  return 0;
}