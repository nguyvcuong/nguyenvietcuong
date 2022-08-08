#include <stdio.h>
int main(){
	int n;
	printf("nhap n =");
	scanf("%d",&n);
	int s=0;
	int y=0;
	while (y<=n){
	s=s+y;
	y=y+1;	
	}
	printf ("tong s :%d ",s);
	
}