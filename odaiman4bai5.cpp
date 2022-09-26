#include<stdio.h>
int main()
{
  int temp, n, max;
  do
  {
    printf("\n nhap n > 0: ");
    scanf("%d", &n);
    if(n <= 0)
    {
      printf("\n  n>0, vui long nha lai !");
    }
  }while(n <= 0);
  temp = n;
  do
  {
     max = temp % 10;
  }while(temp /= 10);
  printf("\nChu so dau tien cua %d la: %d",n, max);
}