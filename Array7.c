#include<stdio.h>
int main(){
	int a[100], n=0, i;
	printf("Nhap so phan tu:"); scanf("%d",&n);
	for(i=0; i<n; i++){
		printf("Nhap a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i = 0; i < n/2; i++)
		if(a[i] != a[n-1-i])
		{
			printf("Khong doi xung");
			return 1;
		}
	printf("Doi xung");
}


































//	int a[100];
//	int n, i, kt;
//	printf("Nhap so phan tu cua mang: "); scanf("%d",&n);
//	for(i=0 ; i <= n-1; i++){
//		printf("Nhap gia tri a[%d]: ",i);
//		scanf("%d",&a[i]);
//	}
//	printf("Mang co %d phan tu :\n", n);
//	for(i = 0; i <= n-1; i++){
//		printf("a[%d]= %d\n",i,a[i]);
//	}
//	//Kiem tra doi xung 
//	kt = 1;
//	for(i=0 ; i <= n-1; i++){
//		if(a[i] != a[n - i - 1]){
//			kt = 0;
//			break;
//		}
//	}
//	if(kt == 1){
//		printf("Mang doi xung");
//	}
//	else{
//		printf("Mang khong doi xung");
//	}
//}
//	
