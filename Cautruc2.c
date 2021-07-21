#include<stdio.h>
int main(){
	int i, n, S1=0, S2=0, S3=0;
	scanf("%d",&n);
	for(i=0;i < n; i++){
		S1 += i;	  //Tong so nho hon n
	}
	for(i = 0; i < n; i++ ){
		if(i % 2 != 0)// tong khi so le	
			S2 += i;
		else          //tong khi so chan
			S3 += i;
	}
		printf("Sum = %d", S1);
		printf("\nSum = %d", S2);
		printf("\nSum = %d", S3);	
}
