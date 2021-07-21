#include <stdio.h>
#include <math.h>
int main(){
	int n, i;
	printf("Enter n =");
	scanf("%d",&n);
	int S = 0, T = 1;
	for( i = 1; i <= n; i++){
		T = T*i;
		S = S + i*T;
	}
	printf("Sum = %d", S);
}

