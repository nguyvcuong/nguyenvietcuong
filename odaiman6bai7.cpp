#include<stdio.h>
int main()
{
  int i, n, temp;
  int max = 0;

  do
  {
    printf("\n nhap n>0 : ");
    scanf("%d", &n);
  }while(n < 0 && printf("\n n>= 0!!"));
  temp = n;
 
  if(n == 0)
    max = 0;

  do
  {
    i = n % 10;
    if(i > max)
    {
      max = i;
    }
  }while(n /= 10);
  printf("\n Chu so lon nhat trong %d la: %d",temp, max);
}