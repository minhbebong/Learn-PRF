#include <stdio.h>
void InputArr(int arr[100],int *size)
{
	int i; 
	printf("Nhap so luong phan tu:");
	scanf("%d",size);
	for(i=0 ; i < *size;i++)
	{
		printf("Nhap phan tu thu %d:",i);
		scanf("%d",&arr[i]);
	}
}
void OutputArr(int arr[100],int size){
	int i;
	printf("So phan tu %d\n",size);
	for(i=0; i<size; i++)
		printf("%5d", arr[i]);
}
main()
{
	int a[100],n, i, k, x;
	InputArr(a, &n);
	printf("Nhap chi so muon chen ");
	scanf("%d",&k);
	printf("Nhap gia tri  muon chen ");
	scanf("%d",&x);
	//chen x vao vi tri a[k]
	for(i=n; i >= k+1; i--)
		a[i] = a[i-1];
		a[k]= x;
		n++;
	OutputArr(a,n);
}

