#include <stdio.h>
#include <math.h>
int main(){
	int n, i,x;
	float S = 1,temp,T;
	int P=1;
	printf("Enter n = ");
	scanf("%d",&n);
	printf("Enter x = ");
	scanf("%d",&x);
	for(i = 1; i <= n; i++){
		T = 2*i;
		P *= 2*i;	
		temp = 1.0*pow(-1,i)*pow(x,T)/P;
		S += temp;
	}
	printf("Sum = %f\n", S);
}
