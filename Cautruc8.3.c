#include <stdio.h>
#include <math.h>
int main(){
	int n, i;
	float S = 1,temp;
	printf("Enter n = ");
	scanf("%d",&n);
	for(i = 1; i <= n; i++){	
		temp = 1.0/(2*i+1);
		S += temp;
	}
	printf("Sum = %f\n", S);
}













//#include<stdio.h>
//#include<math.h>
//int main(){
//   float i, n ,x;
//    float S = 1;
//    printf("Enter x =");
//    scanf("%f",&x);
//    printf("Enter n =");
//    scanf("%f",&n);
//    for(i = 1; i < 2*n + 1; i=i+2)
//    {
//        S = S + pow(x,i)/i;
//    }
//    printf("\nSum: %f", S);   
//    return 0;
//}

