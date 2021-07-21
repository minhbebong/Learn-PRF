#include<stdio.h>
int main(){
	int a[100];
	int n,i,b;
	printf("Nhap so phan tu cua mang: "); scanf("%d",&n);
	for(i=0 ; i <= n-1; i++){
		printf("Nhap gia tri a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("Mang co %d phan tu :\n", n);
	for(i = 0; i <= n-1; i++){
		printf("a[%d]= %d\n",i,a[i]);
	}
	b =0;
	for(i=0; i < n; i++){
		if(a[i] % 2 == 0){
			b++;
		}	
	}
	printf("Dem so so chan la :%d",b);
	printf("\nDem so so le : %d",n-b);	
}
