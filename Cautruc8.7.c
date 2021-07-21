#include <stdio.h>
#include <math.h>
int main(){
	int n, i;
	float S = 1,temp;
	int P=1;
	printf("Enter n = ");
	scanf("%d",&n);
	for(i = 1; i <= n; i++){
		P *= i;	
		temp = pow(-1,i)*pow(P,-1);
		S += temp;
	}
	printf("Sum = %f\n", S);
}

//#include <stdio.h>
//#include <math.h>
//int main(){
//	int n,i,T=1,dau;
//	float S=1;
//	dau=-1;
//	printf("Nhap n: ");
//	scanf("%d",&n);
//	for(i=1 ; i<=n; i++){
//		T *= i;
//		S = S + dau*1.0/T;
//		dau = -dau;
//		printf("gt= %f\n",1.0/T);
//	}
//	printf("Sum = %f",S);
//}
