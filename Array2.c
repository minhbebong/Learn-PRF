#include<stdio.h>
int main(){
	int n,x,i ,dem; 
	printf("Nhap x:");
	scanf("%d", &x);
	printf("\nNhap n:");
	scanf("%d",&n);
	dem=0;
	//Nhap mang
	int a[n];
	for(i=0 ; i<n ; i++)
	{
	printf("\na[%d]=",i);
	scanf("%d", &a[i]);
	}
	//Dem Gia Tri
	for(i=0 ; i<n ; i++)
		if(a[i]==x) dem=dem++;
	printf("%d",dem);
}
	
