#include <stdio.h>
int main(){
	int n,i,b;
	printf("Nhap n:");
	scanf("%d",&n);
	int a[n];	
	for(i=0 ; i < n; i++)
		scanf("%d", &a[i]);
	b =0;
	for(i=0; i < n; i++){
		if(a[i] % 2 == 0){
			b++;
		}	
	}
	printf("Dem so so chan la :%d",b);
	printf("\nDem so so le : %d",n-b);
}
