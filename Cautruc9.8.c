#include <stdio.h>
#include <math.h>
int main(){
	int n, i,x;
	float S = 1,temp;
	int P=1;
	printf("Enter n = ");
	scanf("%d",&n);
	printf("Enter x = ");
	scanf("%d",&x);
	for(i = 1; i <= n; i++){
		P *= i;	
		temp = 1.0*i*x/P;
		S += temp;
	}
	printf("Sum = %f\n", S);
}
