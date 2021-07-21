#include<stdio.h>
int main(){
	int i, n, temp=0;
	int a[1000];
	printf("Nhap n:");
	scanf("%d",&n);
	for(i = 0; i < n; i++){
		printf("a[%d]=",i); scanf("%d",&a[i]);
	}
	for(i = 0; i < n; i++){
		if(a[i] > a[i+1]){
			printf("Khong la mang tang dan tai vi tri thu %d",i+2);
			break;
		}
		else {
			temp++;
		}
		if(temp == n-1)	printf("La mang tang dan ");
	}
	return 0;
}
