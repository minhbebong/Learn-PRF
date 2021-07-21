#include <stdio.h>
#include <math.h>
#include <conio.h>
int main(){
	int n,i;
	printf("Nhap n:");
	scanf("%d",&n);
	if(n<2){
		printf("n khong nguyen to");
		return 0;
	}
	for(i=1;i<sqrt(n);i++)
		if(n%i==0){
			printf("n khong nguyen to");
			return 0;
		}
	printf("n la so nguyen to ");
		return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
//	int n,i,dem=0;
//	printf("Nhap n = ");
//	scanf("%d", &n);
//	if(n <= 1)
//		printf("Khong la so nguyen to");
//	//Neu n>1 dung vong lap
//	else{
//		for(i=2;i<=n;i++){
//			if(n%i==0)
//				dem++;
//		}
//	}
//	if(dem==2)
//		printf("La so nguyen to");
//	else
//		printf("Khong la so nguyen to");
//}
	
