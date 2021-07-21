#include <stdio.h>
#include <math.h>
int main(){
	int a,b,r;
	printf("Nhap vào a,b:");
	scanf("%d %d ",&a, &b);
	while(1){
		r = a%b;
		if(r == 0)
		{
			printf("UCLN la : %d",b);
			break;
		}
		a = b;
		b = r;
	}
}
	

	
//	int a,b;
//	printf("Nhap hai so a,b: ");
//	scanf("%d %d",&a,&b);
//	while(a != b){
//		if(a > b) a = a-b;
//		else b = b-a;
//	}
//	printf("UCLN cua 2 so la : %d",a);
//}
