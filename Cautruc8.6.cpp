#include<stdio.h>
#include<conio.h>
#include <math.h>
int main(){
    int i, n;
    float S = 1,temp;
    printf("Enter n =");
    scanf("%d",&n);
    for(i = 1; i <= n; i++){
	temp = pow(-1,i)*1.0*1/(i+1);
	S += temp;
    }
	printf("SUM = %f", S);
    return 0;
}
