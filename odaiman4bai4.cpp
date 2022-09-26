
#include<stdio.h>
int main()
{
  int temp, n, max;
  do
  {
    printf("nhap n > 0 : ");
    scanf("%d", &n);
    if(n <= 0)
    {
      printf(" n < 0, vui long nhap lai !");
    }
  }while(n <= 0);
  temp = n;
  do
  {
     max = temp % 10;
  }while(temp /= 10);
  printf("chu so dau tien \%d la:%d",n, max);
}