#include <stdio.h>
#include <math.h>

int main() {
	int n =0,dau=1;
	float ep=0.0001 , pi=0;
	while(1){
		pi=pi+dau*4.0/(2*n+1);
		if (4.0/(2*n+1) < ep) 
			break;
		n++;
		dau=-dau;
	}
	printf("Pi=%f",pi);
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
//	double c;
//	printf("Nhap do chinh xac c: ");
//	scanf("%lf", &c);	
//	int k = 0;
//	double res = 0;
//	int signal = -1;
//	double tg = 1.0 / (2 * k + 1);
//	while(tg >= c) {
//		tg = 1.0 / (2 * k + 1);
//		res += -1 * signal * tg;
//		signal *= -1;
//		k++;	
//	}
//	double PI = 4 * res;
//	printf("PI = %0.8lf", PI);
//	
//	return 0;
//}
