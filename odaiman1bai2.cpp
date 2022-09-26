#include<stdio.h>
int main()
{
   int a,b,c;

   printf("\nNhap vao ba so can kiem tra:");
   scanf("%d %d %d",&a,&b,&c);
 
   if((a>b)&&(a>c))
      printf("\n %d a la so lon nhat");
   else if((a>b)&&(b>a))
      printf("\n %d b la so lon nhat");
   else
      printf("\n %d c la so lon nhat");
   return 0;
}