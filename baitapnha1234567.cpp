#include <stdio.h>
int main(){
	int n;
	printf ("nhap vao n :");
	scanf ("%d", &n);
	for(int i = n ;i--;){
		if(i%2==0 && i%3==0){
			printf("%d",i );
			
		}
	}
	return 0;
	}
	

