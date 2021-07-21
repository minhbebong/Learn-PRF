#include<stdio.h>
int main(){
	int n,i,min;
	printf("Nhap n:");
	scanf("%d",&n);	
	int a[n];
	for( i=0; i<n; i++){
		printf("a[%d]=",i);
		scanf("%d", &a[i]);
	}
	printf("Mang vua nhap : \n");
	for(i=0; i<n; i++)	printf("%d ",a[i]);
	//Tim min
	min = a[0];
	for(i=0; i<n; i++){
		if(min > a[i])	min=a[i];		
	}
	printf("\nMin= %d",min);
	for(i=0; i<n; i++){
		if(a[i]==min){
			printf("\nVi tri cua so min la a[%d]",i);
		}
	}	
}
