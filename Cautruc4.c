#include <stdio.h>
#include <math.h>
int main(){
	int n, i;
	float S = 0;
	printf("Enter n = ");
	scanf("%d",&n);
	for(i = 1; i <= n; i++){
		S = S + 1.0/i;
		printf("%f ",1.0/i);
	}
	printf("Sum = %.2f\n",S);
}







//void main()
//{
//    double number, sum = 0, i;
// 
//    printf("\n Enter the number = ");
//    scanf("%lf", &number);
//    for (i = 1; i <= number; i++)
//    {
//        sum = sum + (1 / i);
//        if (i == 1)
//            printf("\n 1 +");
//        else if (i == number)
//            printf(" (1 / %0.2lf)", i);
//        else
//            printf(" (1 / %0.2lf) + ", i);
//    }
//    printf("\n The sum of the given series is %.2lf", sum);
//}


