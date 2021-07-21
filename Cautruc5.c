#include <stdio.h>
int main(){
	int n,i;
	int gt = 1;
	printf("Nhap n: ");
	scanf("%d", &n);
	if(n < 0){
		printf("Nhap n > 0!");
		return 0;
	}
	for(i = 1; i <= n;i++ )
		gt *= i;
	printf("%d! = %d", n , gt);
	return 0;			
}












//		for ( i = n; i >= 1; i--)
