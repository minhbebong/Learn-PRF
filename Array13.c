#include<stdio.h>
#include<stdlib.h>
void del(int a[], int *n, int k){
	for (k;k<*n-1;k++){
		a[k]=a[k+1];
	}
	*n=*n-1;
	return;
}
main(){
	int n,i,vitri;
	printf("Nhap n = ");
	scanf("%d",&n);
	int a[100];
	for(i=0; i<n; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d", &a[i]);
	}
	printf("Nhap vitri = ");
	scanf("%d",&vitri);
	del(a,&n,vitri);
	printf("Mang gom %d phan tu la : ",n);
	for (i=0; i<n; i++) printf("%5d", a[i]);
}
	
