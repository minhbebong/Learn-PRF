#include<stdio.h>
#include<conio.h>
#include <math.h>
int main(){
    int i, n;
    float S = 1,temp;
    printf("Enter n =");
    scanf("%d",&n);
    for(i = 1; i <= n; i++){
	temp = pow(-1,i)*1.0/(i+1);
	S += temp;
    }
	printf("SUM = %f", S);
    return 0;
}


Cach 2 :
//#include <stdio.h>
//#include <math.h>
//int main(){
//	int n,i,dau;
//	float S=1;
//	dau=-1;
//	printf("Nhap n: ");
//	scanf("%d",&n);
//	for(i=1 ; i<=n; i++){
//		S = S + dau*1.0/(i+1);
//		dau = -dau;
//		printf("gt= %f\n",1.0/(i+1));
//	}
//	printf("Sum = %f",S);
//}
