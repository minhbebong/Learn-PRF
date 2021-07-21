#include<stdio.h>
int main(){
	int a,n;
	float s;
	printf("Nhap a: ");
	scanf("%d",&a);
	n=0;s=0;
	while(s<=a){
		n++;
		s=s+1.0/n;
	}
	printf("n can tim la : %d", n);
}
