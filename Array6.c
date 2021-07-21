#include<stdio.h>
#include<math.h>
int main(){
	int a[100];
	int n=0, i, x  , F = 0;
	while(1){
		printf("Nhap a[%d] = ",n); scanf("%d",&a[n]);
		if(a[n] == 0) break;
		n++;
	}
	printf("Nhap x:"); scanf("%d",&x);
	for(i=0 ; i < n; i++){
		F += a[i]*pow(x,i);
	}
	printf("Sum : %d",F);
}
