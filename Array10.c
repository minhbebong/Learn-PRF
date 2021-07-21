#include <stdio.h>
void InputArr(int arr[100],int *size)
{
	int i; 
	printf("Nhap so luong phan tu:");
	scanf("%d",size);
	for(i=0 ; i < *size;i++)
	{
		printf("Nhap phan tu thu %d:",i);
		scanf("%d", &arr[i]);
	}
}
void OutputArr(int arr[100],int size){
	int i;
	printf("So phan tu %d\n",size);
	for(i=0; i < size; i++)
		printf("%5d", arr[i]);
}
main(){
	int a[100],b[100],c[100],n,m,i,j;
	InputArr(a, &n);
	InputArr(b, &m);
	i=0; j=0;
	while(1){
		if(i==n||j==m) break;
		if(a[i]<b[j]){//dua a[i] vao c
			c[i+j]=a[i];
			i++;
		}
		else{ //dua b[j] vao c
			c[i+j]=b[j];
			j++;
		}
	}
	if(i==n)
		for(;j<m;j++)
			c[i+j]=b[j];
	else if(j==m)
		for(;i<n;i++)
			c[i+j]=a[i];
	OutputArr(c,i+j);	
}














//int main(){
//	int a[100],b[100],c[100];
//	int n, i,m,j,k,l;
//	printf("Nhap so phan tu cua mang: "); scanf("%d",&n);
//	printf("Nhap so phan tu cua mang: "); scanf("%d",&m);
//	for(i=0 ; i <= n-1; i++){
//		printf("Nhap gia tri a[%d]: ",i);
//		scanf("%d",&a[i]);
//	}
//	for(j=0 ; j <= m-1; j++){
//		printf("Nhap gia tri b[%d]: ",j);
//		scanf("%d",&b[j]);
//	}
//	while((i < n)&& (j < m)){
//		l = n+m;
//		if(a[i] < b[j]){
//			c[k] = a[i];
//			k++;
//			i++;
//		}
//		else
//		{
//			c[k] = b[j];
//			k++;
//			j++;
//		}
//		printf("%d ",l);
//	}
//
//}
