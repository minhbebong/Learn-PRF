//#include<stdio.h>
//int main(){
//	int n,i,max;
//	printf("Nhap n:");
//	scanf("%d",&n);	
//	float a[100];
//	for( i=0; i<n; i++){
//		printf("a[%d]=",i);
//		scanf("%f", &a[i]);
//	}
//	printf("Mang vua nhap : \n");
//	for(i=0; i<n; i++)	
//	printf("%.2f ",a[i]);
#include<stdio.h>
int main(){
	float a[100];
	int n,i,max;
	printf("Nhap so phan tu cua mang: "); scanf("%d",&n);
	for(i=0 ; i <= n-1; i++){
		printf("Nhap gia tri a[%d]: ",i);
		scanf("%f",&a[i]);
	}
	printf("Mang co %d phan tu :\n", n);
	for(i = 0; i <= n-1; i++){
		printf("a[%d]= %f\n",i,a[i]);
	}
	//Tim max
	max = a[0];
	for(i=1; i<n; i++){
		if(max < a[i])	max=a[i];
	}
		printf("\nMax = %d",max);
}


