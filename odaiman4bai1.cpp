#include<stdio.h>
int main()
{
  int n;
  long S = 0;
  {
    printf(" nhap n > 0: ");
    scanf("%d", &n);
  if(n <= 0)
  {
    printf("n < 0, vui long nhap lai !");
  }
  }while(n <= 0);
  printf("cac uoc cua %d la: ",n);
  for(int i = 1; i <= n; i++)
  {
    if(n % i == 0)
    {
      printf(" %4d", i);
      S = S + i;
    }
  }
  printf(" tong cac uoc cua %d la: %ld", n, S);
}