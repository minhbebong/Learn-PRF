#include <stdio.h>
#include<math.h>
int main(){
	int a[100], n=0, size =0,i,sign=1;
	printf("Nhap so can chuyen :"); scanf("%d",&n);
	if(n < 0){
		n = -n;
		sign = -1;
	}
	if(n == 0){
		printf("0");
		return 0;
	}
	while(n>0){
		a[size] = n%2;
		size ++;
		n = n/2;
	}
	printf("Bieu dien o he co so 2:");
	if(sign < 0)	printf("-");
	for(i = size -1;i>=0;i--)
		printf("%d",a[i]);
}
