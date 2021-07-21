#include<stdio.h>
#include<stdlib.h>
void insert(int a[], int *n, int k,int x){
	int i;
	for (i=*n;i>k;i=i-1){
		a[i]=a[i-1];
	}
	a[k]=x;
	*n=*n+1;
	return;
}
main(){
	int n, i, a[100],vitri,giatri;
	printf("Nhap n = ");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d", &a[i]);
	}
	printf("Nhap vitri = ");
	scanf("%d", &vitri);
	printf("Nhap giatri = ");
	scanf("%d", &giatri);
	insert(a, &n, vitri, giatri);
	printf("Mang gom %d phan tu la : ",n);
	for (i=0; i<n; i++) printf("%5d", a[i]);
	
}
	
