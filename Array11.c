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
main()
{
	int a[100],n, i, k ;
	InputArr(a, &n);//Nhap du lieu
	printf("Nhap chi so muon xoa: ");
	scanf("%d",&k);
	for(i = k ; i <= n-2; i++)
		a[i] = a[i+1];
		n--;
	OutputArr(a,n);
}


























//void nhap(int *arr, int *n) {
//	*n = 0;
//	while(*n <= 0) {
//		printf("Nhap n > 0: ");
//		scanf("%d", n);
//	}
//	int i;
//	for(i = 0; i < *n; i++) {
//		printf("arr[%d] = ", i);
//		scanf("%d", &arr[i]);
//	}
//}
//int nhapK(int n) {
//	int k = -1;
//	while(k < 0 || k >= n) {
//		printf("Nhap k(0 <= k < n): ");
//		scanf("%d", &k);
//	}
//	return k;
//}
//void xoa(int *arr, int *n, int k) {
//	int i;
//	for(i = k; i < *n - 1; i++) {
//		arr[i] = arr[i + 1];
//	}
//	*n -= 1;
//}
//void hienThi(int *arr, int n) {
//	int i;
//	for(i = 0; i < n; i++) {
//		printf("%-10d", arr[i]);
//	}
//}
//int main() {
//	int n;
//	int arr[100];
//	nhap(arr, &n);
//	int k = nhapK(n);
//	xoa(arr, &n, k);
//	hienThi(arr, n);
//	return 0;
//}

