#include<stdio.h>
int main(){
	int a[100],b[100],c[100];
	int n, i;
	printf("Nhap so phan tu cua mang: "); scanf("%d",&n);
	for(i=0 ; i <= n-1; i++){
		printf("Nhap gia tri a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0 ; i <= n-1; i++){
		printf("Nhap gia tri b[%d]: ",i);
		scanf("%d",&b[i]);
	}
	for(i=0 ; i <= n-1; i++){
		printf(" Gia tri c[%d] = %d\n",i,a[i]+ b[i]);
	}
}
	
